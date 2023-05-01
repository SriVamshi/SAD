#include <stdio.h>

int main() {
    int num, divisor, msd;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    divisor = 1;
    while (num / divisor >= 10) {
        divisor *= 10;
    }

    msd = num / divisor;
    printf("The most significant digit is %d\n", msd);
    return 0;
}
