#include<stdio.h>
main(){
    float number;
    printf("Enter the  number: ");
    scanf("%f",&number);
    if (number==0)
    {
        printf("\nThe number %f is zero.\n",number);
    }
    else if (number>0)

    {
         printf("\nThe number %f is a positive number.\n",number);
    }
    else if (number<0)
    {
        printf("\nThe number %f is a negative number .\n",number);
    }


    return 0;
      }
