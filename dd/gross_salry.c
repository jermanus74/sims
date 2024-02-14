#include <stdio.h>
int main(){
    float hours,rate,gross_salary;
    int service_period;

    printf("Enter service period(in years):");
    scanf("%d",&service_period);

    printf("Enter rate : ");
    scanf("%f",&rate);
    printf("Enter working hours: ");
    scanf("%f",&hours);

    gross_salary = (rate*hours)/100;
    printf("gross_salary is %f\n",gross_salary);
    if (service_period >10)
    {
        gross_salary += (service_period*15)/100;
        printf("your annual gross salary is %.3f",gross_salary);
    }
    else{
        printf("your annual gross salary is %.3f",gross_salary);

    }
    return 0    ;
}