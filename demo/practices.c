#include <stdio.h>
int main()
{
    float num1, num2, num3;
    printf("Enter a number1.");
    scanf("%f", &num1);
    printf("Enter a number2.");
    scanf("%f", &num2);
    printf("Enter a number3.");
    scanf("%f", &num3);
    if (num1 == num2 && num2 == num3)
    {
        printf("the triangle with sides %.2fm %.2fm %.2fm is equilateral.", num1, num2, num3);
    }
    else if (num1 == num2 || num2 == num3 || num3 == num1)
    {
        printf("the triangle is with sides  %.2fm %.2fm %.2fm isoscelles.", num1, num2, num3);
    }
    else
    {
        printf("the triangle with sides  %.2fm, %.2fm, %.2fm is scalene.", num1, num2, num3);
    }
}