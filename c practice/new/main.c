#include <stdio.h>
// #include <stdlib.h>

int main()
{
    for (int x = 0; x < 4; x++)
    {
        for (int y = 4; y > x; y--)
        {
            printf(" ");
        }
        for (int z = 0; z <= (x * 2); z++)
        {
            printf("x");
        }
        printf("\n");
    }
}
