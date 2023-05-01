#include <stdio.h>

int main() {
    int num, msd;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    msd = num;
    while (msd >= 10) {
        msd /= 10;
    }

    printf("The most significant digit is %d\n", msd);
    return 0;
}