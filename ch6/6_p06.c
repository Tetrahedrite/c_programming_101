#include <stdio.h>

int choose_menu() {
    int menu;

    printf("[1. 파일 열기  2. 파일 저장  3. 인쇄  0. 종료] 선택? ");
    scanf("%d", &menu);

    return menu;
}

int main() {
    while (1) {
        switch (choose_menu()) {
            case 0:
                return 0;
            case 1:
                printf("파일 열기를 수행합니다.\n");
                break;
            case 2:
                printf("파일 저장을 수행합니다.\n");
                break;
            case 3:
                printf("인쇄를 수행합니다.\n");
                break;
        }
    }
}
