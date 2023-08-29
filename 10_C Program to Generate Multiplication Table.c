#include <stdio.h>
print_table(int range, int number /* ,int multiplication*/)
    {
   int multiplication;
   // int i;
    for (int i = 1; i <= range; i++)
        {
        multiplication = number * i;
        printf("%d * %d = %d\n", number, i, multiplication);
       // printf("\n");
        }
    }
main()
    {
    int range ;
    int number = 5;
    printf("Enter the range:");
    scanf("%d", &range);
    printf("Enter the number:");
    scanf("%d", &number);

    print_table(range, number);

    return 0;
    }
