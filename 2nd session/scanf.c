#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter number one (int): ");
    scanf("%d", &num1);

    printf("Enter number two (int): ");
    scanf("%d", &num2);

    printf("Enter number three (int): ");
    scanf("%d", &num3);

    int sum = num1 + num2 + num3;

    printf("The sum of %d and %d and %d is %d", num1, num2, num3, sum);


    return 0;
}