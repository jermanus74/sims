#include <stdio.h>
int main()
{
    int Number[10];
    int Max, Min;
    int i;
    Min = Max = Number[0];
    printf("Enter the mark to calculate min and max \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d>", i + 1);
        scanf("%d", &Number[i]);
    }
    for (i = 1; i < 10; i++)
    {
        if (Number[i] < Min)
        {
            Min = Number[i];
        }
        if (Number[i] > Max)
        {
            Max = Number[i];
        }
    }
    printf("MaxMum Value is %d \n", Max);
    printf("Your MinMum Value is %d \n", Min);
}