#include <stdio.h>
int main(){
    int x;
    printf("how many lines do ue want: ");
    scanf("%d", &x);
    printf("\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = (x - 1); j > i; j--)
        {
            printf(" ");
        }
        printf("/");
        for (int y = 0; y < i*2 && i < (x - 1); y++)
        {
            printf(" ");
        }
        for (int l = 0; l < (x - 1)*2 && i == (x - 1); l++)
        {
            printf("_");
        }

        printf("\\\n");
    //     printf("\\\n");
    }
    // int x;
    // printf("how many lines do ue want: ");
    // scanf("%d", &x);
    // printf("\n");
    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = (x - 1); j > i; j--)
    //     {
    //         printf(" ");
    //     }
    //     printf("/");
    //     for (int y = 0; y < i && i < (x - 1); y++)
    //     {
    //         printf(" ");
    //     }
    //     for (int l = 0; l < (x - 1) && i == (x - 1); l++)
    //     {
    //         printf("_");
    //     }

    //     printf("|\n");
    // }
}