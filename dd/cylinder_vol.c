#include <stdio.h>
float Pi = 3.14159;
float cylinder_vol(float radius, float height)
{
    return Pi * (radius * radius * height);
}

int main()
{
    float r, h, volume;
    printf("calculate volume of cylinder \n");
    printf("enter radius of cylinder: ");
    scanf("%f", &r);
    printf("enter height of cylinder: ");
    scanf("%f", &h);

    if (r > 0 && h > 0)
    {
        volume = cylinder_vol(r, h);
        printf("volume of cylinder one is %f\n", volume);
    }
    else
    {
   printf("Both height and radius of cylinder must be greater than zero\n");
       
    }
}