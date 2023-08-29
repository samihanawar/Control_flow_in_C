#include<stdio.h>

int main()
{
int number, value=0,rem ;
   printf("enter the number");
   scanf("%d", &number);
   while(number>0)
   {
   rem=number%10;
   number=number/10;

   value =value *10;
   value=value + rem;}
   printf("\nThe reverse number is :%d\n", value);
    return 0;
}
