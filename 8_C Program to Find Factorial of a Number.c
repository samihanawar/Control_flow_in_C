#include<stdio.h>
main(){
    int number, i;
    int factorial=1;
    printf("Enter the number: ");
    scanf("%d",&number);
    for (i=1;i<=number;i++)
    {
        factorial=i*factorial;

    }
    printf("\nThe factorial for %d is %d\n",number,factorial);
}



