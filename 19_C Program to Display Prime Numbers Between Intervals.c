#include <stdio.h>
 main()
{
    int lower, upper, i, j, flag;
    printf("Enter lower bound of the interval: ");
    scanf("%d", &lower);
    printf("Enter upper bound of the interval: ");
    scanf("%d", &upper);
    printf("Prime numbers between %d and %d are: \n",
            lower, upper);
    for (i = lower; i <= upper; i++)
    {
        if (i == 1 || i == 0)
            continue;
        flag = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("%d \n", i);
    }

    return 0;
}
