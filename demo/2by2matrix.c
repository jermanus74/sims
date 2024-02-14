#include <stdio.h>
int main()
{
    char choice;
    
    do{

    int a, b;

    printf("enter number to calculate factorial: ");
    scanf("%d", &b);
    if (b < 0)
    {
        printf("Sorry! Factorial of can't be calculated for negative numbers and zero.\n");
    }
       else if (b<=1)
        {
            printf("the factorial of %d is 1\t",b);
        }
    else
    {
        a = 1;
        printf("The factorial of %d = ", b);
        do
        {
            a = a * b;
            printf("%d * ", b);
            b--;
        } while (b > 1);
        printf("%d = %d\n", b, a);
    }
    printf("Press Y to continue or N to terminate\n");
    scanf(" %c", &choice);
    }while(choice=='y' || choice=='Y');

    return 0;
}