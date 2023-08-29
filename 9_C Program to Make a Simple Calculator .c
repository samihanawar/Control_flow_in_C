#include<stdio.h>
int main()
{
    char exitt;
    float number1,number2;
    while (1) {
        printf("Enter an operator +, -, *, /, \n");
        printf("\nIf want to exit, press x:\nyou chose: ");
        scanf(" %c", &exitt);
        if (exitt == 'x')
            {printf("\nThank you.\n");
            exit(0);}
        else{
        printf("Enter 1st operand: ");
        scanf("%f",&number1);
         printf("Enter 2nd operand: ");
        scanf("%f",&number2);
        switch (exitt) {
        case '+':
            printf("\nSum of %f and %f is = %f",  number1,number2,  number1+number2 );
            break;
        case '-':
            printf("\nSubtraction of %f and %f is = %f",  number1,number2,  number1-number2);
            break;
        case '*':
            printf("\nMultiplication of %f and  %f is = %f",  number1,number2,  number1*number2);
            break;
        case '/':
            printf("Division of %f and %f is = %f",  number1,number2,  number1/number2);
            break;
        default:
            printf(
                "Please enter a valid operator\n");
        }

        printf("\n");
        printf("\nThank you.\n");
    }
    }
        return 0;
}

