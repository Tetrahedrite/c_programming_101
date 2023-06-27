#include <stdio.h>

int main() {
    double temp_celcius, temp_fahrenheit;

    printf("화씨온도? ");
    scanf("%lf", &temp_fahrenheit);

    temp_celcius = (temp_fahrenheit - 32) * 5.0 / 9.0;
    printf("%.2lf F = %.2lf C\n", temp_fahrenheit, temp_celcius);
    return 0;
}
