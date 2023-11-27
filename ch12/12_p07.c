#include <stdio.h>
#include <string.h>

#define BUF_SIZE 1024
#define MENU_SIZE 3
#define FILENAME "receipt.txt"

typedef struct tagMENU {
    char name[50];
    int price;
    int quantity;
} MENU;

int getKoreanWidth(const char *name) {
    return strlen(name) / 3 * 2;
}

int getTotalPrice(const MENU *menu, size_t size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += menu[i].price * menu[i].quantity;
    }
    return sum;
}

void writeIntoFile(FILE *fp, const MENU *menus) {
    fprintf(fp, "%s%*c %*c%s %*c%s %*c%s\n",
            "제품명", 15 - getKoreanWidth("제품명"), ' ',
            5 - getKoreanWidth("단가"), ' ', "단가",
            5 - getKoreanWidth("수량"), ' ', "수량",
            5 - getKoreanWidth("금액"), ' ', "금액");
    fprintf(fp, "---------------------------------\n");
    for (int i = 0; i < 3; i++) {
        if (menus[i].quantity == 0)
            continue;
        fprintf(fp, "%s%*c %5d %5d %5d\n",
                menus[i].name, 15 - getKoreanWidth(menus[i].name), ' ',
                menus[i].price,
                menus[i].quantity,
                menus[i].price * menus[i].quantity);
    }
    fprintf(fp, "---------------------------------\n");
    fprintf(fp, "%s%*c %17d", "합계", 15 - getKoreanWidth("합계"), ' ', getTotalPrice(menus, MENU_SIZE));
}

int main() {
    MENU menus[MENU_SIZE] = {
        { "아메리카노", 4000, },
        { "카페라떼", 4500, },
        { "플랫화이트", 5000, },
    };

    int shouldContinue = 1;
    while (shouldContinue) {
        printf("[메뉴] ");
        for (int i = 0; i < MENU_SIZE; i++) {
            printf("%s:%d", menus[i].name, menus[i].price);
            if (i < MENU_SIZE - 1)
                printf(", ");
        }
        printf("\n");

        for (int i = 0; i < MENU_SIZE; i++) {
            printf("%-10s 수량? ", menus[i].name);
            scanf("%d", &menus[i].quantity);
        }

        shouldContinue = 0;
        for (int i = 0; i < MENU_SIZE; i++) {
            if (menus[i].quantity != 0) {
                shouldContinue = 1;
                break;
            }
        }

        printf("결제 금액: %d\n", getTotalPrice(menus, MENU_SIZE));
    }

    FILE *fp;
    fp = fopen(FILENAME, "w");

    if (fp == NULL) {
        printf("파일 생성 실패\n");
        return 1;
    }

    writeIntoFile(fp, menus);
    fclose(fp);

    return 0;
}
