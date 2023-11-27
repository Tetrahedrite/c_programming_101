#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 1024
#define CONTACT_SIZE 10

typedef struct tagCONTACT {
    char name[STR_SIZE];
    char phone[STR_SIZE];
} CONTACT;

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

int main() {
    char str[STR_SIZE];

    printf("연락처 파일명? ");
    fgets(str, STR_SIZE, stdin);
    str[strlen(str) - 1] = '\0';

    FILE *fp = fopen(str, "r");
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
            puts("연락처를 찾을 수 없습니다.");
        } else {
            printf("%s의 전화번호 %s로 전화를 겁니다....\n", contacts[found].name, contacts[found].phone);
        }
    }
    free(contacts);

    return 0;
}
