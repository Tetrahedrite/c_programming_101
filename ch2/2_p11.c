#include <stdio.h>

int main() {
    double pi = 3.14159265;

    printf("pi = %.2lf\n", pi);
    printf("pi = %.4lf\n", pi);
    printf("pi = %.6lf\n", pi);
    printf("pi = %.8lf\n", pi);
    printf("pi = %le\n", pi);

    return 0;
}
