#include<stdio.h>
main(){
    int range,i,sum;
    sum=0;
    printf("Enter the range: ");
    scanf("%d",&range);
    i=0;
    for (i=1;i<=range;i++)
    {
        sum=sum+i;
    }
    printf("The sum of natural numbers is :%d",sum);
    return 0;
    }
