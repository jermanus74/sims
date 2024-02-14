#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length,width,area;
    printf("Enter length ");
    scanf("%f",&length);
    printf("Enter width ");
    scanf("%f",&width);
    if (length<0 || width<0)
    {
        printf("oops! can't calculate area");
    }
    else{
        area=length*width;
        printf("The area of rectangle is %f",area);
    }

    // for (int  x= 0; x < 6; x++)
    // {

    // printf(" %d ",x);
    // }
    // int userInput;
    // do
    // {
    //     printf("Enter a positive number: \n ");
    //     scanf("%d", &userInput);

    //     if (userInput <= 0)
    //     {
    //         printf("you have entered a negative number which is %d\n", userInput);
    //     }
    //     else
    //     {
    //         printf("you have entered a positive number %d\n", userInput);
    //     }
    // } while (userInput <= 0);
}