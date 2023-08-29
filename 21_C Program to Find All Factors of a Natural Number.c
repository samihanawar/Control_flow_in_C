#include<stdio.h>
main(){
int number,i;
    printf("Enter the number: ");
    scanf("%d",&number);
      printf("\nThe divisors of %d are:\n",number);
    for(i=1;i<=number;i++)
        if(number%i==0)
    {
        printf("%d \n",i);
    }
}
