#include <stdio.h>
int main()
{
    float r1, r2, r3, v1, v2, v3, h1, h2, h3, PI = 3.14159;
    int i = 1;
    while (i <= 1)
    {
        printf("calculate volume of cylinder 1\n");
        printf("enter radius of cylinder: ");
        scanf("%f", &r1);
        printf("enter height of cylinder: ");
        scanf("%f", &h1);
        v1 = PI * r1 * r1 * h1;
        printf("volume of cylinder one is %f\n", v1);

        printf("\ncalculate volume of cylinder 2\n");
        printf("enter radius of cylinder: ");
        scanf("%f", &r2);
        printf("enter height of cylinder: ");
        scanf("%f", &h2);
        v2 = PI * r2 * r2 * h2;
        printf("volume of cylinder one is %f\n", v2);

        printf("\ncalculate volume of cylinder 3\n");
        printf("enter radius of cylinder: ");
        scanf("%f", &r3);
        printf("enter height of cylinder: ");
        scanf("%f", &h3);
        v3 = PI * r3 * r3 * h3;
        printf("volume of cylinder one is %f\n", v3);
        i++;
    }
}