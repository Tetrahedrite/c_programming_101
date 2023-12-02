#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 1024
#define CONTACT_SIZE 10

typedef struct tagContact {
    char name[STR_SIZE];
    char phone[STR_SIZE];
} CONTACT;

typedef struct tagLinkedContact {
    CONTACT *contact;
    struct tagLinkedContact *next;
} LINKED_CONTACT;

static LINKED_CONTACT *linkedContactTail = NULL;

int getContactQuantity(FILE *fp) {
    fseek(fp, 0, SEEK_SET);

    int quantity = 0;
    char line[STR_SIZE];
    while (fgets(line, STR_SIZE, fp)!= NULL) {
        quantity++;
    }
    return quantity;
}

void loadContacts(FILE *fp, CONTACT *contact, int size) {
    fseek(fp, 0, SEEK_SET);

    for (int i = 0; i < size; i++) {
        fscanf(fp, "%s %s", contact[i].name, contact[i].phone);
    }
}

LINKED_CONTACT *registerContact(CONTACT *contact) {
    LINKED_CONTACT *node = (LINKED_CONTACT *) malloc(sizeof(LINKED_CONTACT));
    node->contact = contact;
    node->next = NULL;
    return node;
}

void *freeAllLinkedContact(LINKED_CONTACT *node) {
    while (node != NULL) {
        LINKED_CONTACT *tmp = node;
        node = node->next;
        free(tmp);
    }
}

int main() {
    char str[STR_SIZE];
    char filename[STR_SIZE];

    printf("연락처 파일명? ");
    fgets(filename, STR_SIZE, stdin);
    filename[strlen(filename) - 1] = '\0';

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }
    int quantity = getContactQuantity(fp);
    printf("%d개의 연락처를 로딩했습니다.\n", quantity);

    CONTACT *contacts = (CONTACT *) malloc(sizeof(CONTACT) * quantity);
    loadContacts(fp, contacts, quantity);
    fclose(fp);

    while (1) {
        printf("이름(. 입력 시 종료)? ");
        scanf("%s", str);

        if (strcmp(str, ".") == 0) {
            break;
        }

        int found = -1;
        for (int i = 0; i < quantity; i++) {
            if (strcmp(str, contacts[i].name) == 0)
                found = i;
        }

        if (found == -1) {
            fputs("연락처를 찾을 수 없습니다. 연락처를 등록하시겠습니까(y/n)? ", stdout);
            while (getchar() != '\n');
            if (getchar() == 'y') {
                getchar();
                CONTACT newContact;
                strcpy(newContact.name, str);
                printf("전화번호? ");
                fgets(newContact.phone, STR_SIZE, stdin);
                newContact.phone[strlen(newContact.phone) - 1] = '\0';

                LINKED_CONTACT *node = registerContact(&newContact);
                if (linkedContactTail == NULL) {
                    linkedContactTail = node;
                } else {
                    linkedContactTail->next = node;
                }
            }
        } else {
            printf("%s의 전화번호 %s로 전화를 겁니다....\n", contacts[found].name, contacts[found].phone);
        }
    }

    // Store all contacts
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }

    for (int i = 0; i < quantity; i++) {
        fprintf(fp, "%s %s\n", contacts[i].name, contacts[i].phone);
    }

    while (linkedContactTail != NULL) {
        fprintf(fp, "%s %s\n", linkedContactTail->contact->name, linkedContactTail->contact->phone);
        linkedContactTail = linkedContactTail->next;
        quantity++;
    }
    fclose(fp);

    printf("%s로 %d개의 연락처를 저장했습니다.\n", filename, quantity);

    free(contacts);
    freeAllLinkedContact(linkedContactTail);

    return 0;
}
