#include<stdio.h>

int main()
{
 int num1,num2,num3,rem;
 printf("Enter the number:");
 scanf("%d", &num1);
 num2=num1;
 num3=num1;
 int count=0;
 while(num1!=0)
 {
 num1=num1/10;
 count++;
 }
 int out=0;
 while(num2!=0)
 {
 rem=num2%10;
 out=pow(rem,count)+out;
 num2=num2/10;
 }
 if(out==num3)
printf("\nThe number is angstrong number.\n");
else
printf("\nThe number is not angstrong number.\n");
    return 0;
}

