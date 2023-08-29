#include<stdio.h>
main(){
    int square,num,n,sum,digit;
    printf("Enter the number:");
    scanf("%d",&num);//9
    square = num * num;
    n = square;
    digit;
    sum = 0;
    while (n != 0) {
        digit = n % 10; //9
        sum = sum + digit; //9
        n = n / 10; //0
    }
   if(sum==num) //9=9
    {
    printf("\nThe number %d is a neon number.\n",num);}
    else if (sum!=num){
        printf("\nThe number %d is not a neon number.\n",num);
    }

}
