#include <stdio.h>

int main() {
    int change;

    printf("거스름돈? ");
    scanf("%d", &change);

    printf("거스름돈 (10원미만 절사): %d\n", change / 10 * 10);
    printf("%7d원 %2d장\n", 50000, change / 50000);
    change %= 50000;

    printf("%7d원 %2d장\n", 10000, change / 10000);
    change %= 10000;

    printf("%7d원 %2d장\n", 5000, change / 5000);
    change %= 5000;

    printf("%7d원 %2d장\n", 1000, change / 1000);
    change %= 1000;

    printf("%7d원 %2d개\n", 100, change / 100);
    change %= 100;

    printf("%7d원 %2d개\n", 10, change / 10);

    return 0;
}
