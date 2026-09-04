#include <stdio.h>

int main()
{
    int age;
    float height;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in cm: ");
    scanf("%f", &height);

    printf("\nYour age is: %d\n", age);
    printf("Your height is: %.2f cm\n", height);

    return 0;
}