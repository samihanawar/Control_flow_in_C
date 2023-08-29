#include<stdio.h> //fibonacci=num1+num2=num3; num2+num3=num4;
main()
{
    int number; int num1=0;int num2=1;
    int fibo;
    printf("Enter the number range for fibonacci series that starts from 0: ");
    scanf("%d",&number);
    printf("\n%d\n%d\n", num1, num2);
    for(int i=2;i<number;i++)
    {
       fibo=num1+num2;
       printf("%d\n",fibo);
       num1=num2;
       num2=fibo;
    }


}
