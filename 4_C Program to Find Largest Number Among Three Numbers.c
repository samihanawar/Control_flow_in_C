#include<stdio.h>
main(){
    int number1,number2,number3;
    printf("Enter the numbers: ");
    scanf("%d %d %d",&number1,&number2,&number3);
    if (number1>number2&&number1>number3)
    {
        printf("\nThe number %d is the largest number.\n",number1);
    }
    else if (number2>number1&&number2>number3)
    {
        printf("\nThe number %d is the largest number.\n",number2);
    }
    else if (number3>number2&&number3>number1)
    {
         printf("\nThe number %d is the largest number.\n",number3);
    }
      else if (number3==number2&&number3==number1)
    {
         printf("\nThe number %d is the largest number.\n",number3);
    }
    return 0;
    }
