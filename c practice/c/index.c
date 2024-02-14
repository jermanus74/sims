#include <stdio.h>
int main(){
     char option;
     do
     {
       
    
     
     long int a,x;
     printf("Enter a number to calculate factorial: ");
     scanf("%ld",&a);
     if (a<0)
     {
      printf("sorry!factorial can't be calculated.\n");
     }
     else{
      x=1;
     
     
     }
       do {
            x = x * a;
            printf("%ld * ", a);
         
            a--;
        } while (a > 0);

        printf(" = %ld\n", x);
        printf("do ue want to continue(Y/N): ");
        scanf(" %c", &option);
         } while (option == 'y' || option == 'Y');
}

