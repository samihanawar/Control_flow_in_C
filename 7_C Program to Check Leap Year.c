#include<stdio.h>
main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if (year%400==0)
{
    printf("\nThe year is a leap year\n");
}
else if (year%100==0)
{
    printf("\nThe year is not a leap year\n");
}
else if (year%4==0)
{
    printf("\nThe year is a leap year\n");
}
else
    {
       printf("\nThe year is not a leap year\n");
    }
    return 0;
    }
