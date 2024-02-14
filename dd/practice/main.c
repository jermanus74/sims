#include <stdio.h>
#include <string.h>
#define SIZE 5

int main() {
    int numbers[SIZE];
    printf("Enter %d integers to initialize the array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
printf("\nAccessing elements using a for loop:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }


//  char array[5]={'b', 'a', 'c', 'd', 'e'};
//  char search='b';
//  int i;
 
//  for ( i = 0; i <5; i++)
//  {
//      if (search == array[i])
//  {
//     printf("search element %c found in array at index %d\n", search, i);
//  }

//  }
//  array[2] ='z';
// printf(" array at index 2 is %c",array[2]);
//  int name=sizeof(array);
//  printf(" \n\n length of array is %d",name);

//  char arrays[32]="john doe";
//  int count = 0;
//  while ( arrays[count] != '\0')
//  {
//     count++;
//  }
//  printf("\n\nlentgh of arrays is %d",count);
//  printf("\n%s",arrays);

// char arr[20];
// printf("enter your name\n");
// fgets(arr,sizeof(arr),stdin);
// printf("%s\n",arr);

// int lengths =strlen(arr);
// printf("length= %d",lengths-1);
 
}
