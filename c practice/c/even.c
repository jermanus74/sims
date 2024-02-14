#include <stdio.h>
int main(){

    int x;
    printf("enter number: ");
    scanf("%d",&x);
    printf("even number = ");
    while (x>=10 & x<30)
    {
        if(x%2==0)
        printf(" %d ",x);
        x++;
    }
    

}