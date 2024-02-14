#include <stdio.h>

int main()
{
    int choice;
   
    float radius, height, base, length, width, area, PI = 3.14159;
    printf("do you want to calculate area of: \n 1.circles\n 2.triangles\n 3.rectangle\n ");
    scanf("%d", &choice);

    printf("you have choice %d\n",choice);

    switch (choice)
    {
    case 1:
        printf("enter radius to calculate area of circle: ");
        scanf("%f", &radius);
        area = PI *( radius * radius);
        printf("area of circle: %f\n", area);
        break;
    case 2:
    printf("enter base calculate area of triangle: ");
    scanf("%f", &base);
    printf("Enter height to calculate area of triangle: ");
    scanf("%f", &height);
    area=(height*base)/2;
    printf("area of triangle: %f\n", area);
        break;
    case 3:
        break;

    default:
        break;
    }
   
    // float celcius,fahrenheit;
    // printf("Enter\n 1.To change celcius to fahreiheit.\n 2.To change from fahrenheit to celcius.\n");
    //  scanf("%d",&choice);

    //  if (choice == 1)
    // {
    //     printf("enter tempoerature in celcius: ");
    //     scanf("%f",&celcius);
    //     fahrenheit = (celcius*9/5)+32;
    //     printf("the temperature %.2f celcius to fahreiheit is: %.2f\n",celcius,fahrenheit);
    // }
    // else{
    //   printf("enter tempoerature in fahreiheit: ");
    //     scanf("%f",&fahrenheit);
    //     celcius=(fahrenheit-32)*5/9;
    //     printf("the temperature %.2f faheiheit  to celcius is: %.2f\n",fahrenheit,celcius);

    // }
}