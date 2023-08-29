#include <stdio.h>
 int armstrong_func( int armstrong)
 {
     int num2; int num3; int count; int out; int rem;
    num3=armstrong;
    num2=armstrong;
    count=0;
    while(armstrong!=0)
    {
    armstrong=armstrong/10;
    count++;
    }
    out=0;
    while(num2!=0)
    {
    rem=num2%10;
    out=pow(rem,count)+out;

    num2=num2/10; }//new number create
    if(out==num3) //matching
    return 1;
    else
    return 0;
 }
   main()
   {

        int i,first_limit,last_limit;
        printf("Enter the first limit:");
        scanf("%d",&first_limit);
        printf("Enter the last limit:");
        scanf("%d",&last_limit);
        for(i=first_limit;i<=last_limit;i++){
        int result=armstrong_func(i);
       if (result==1)
       {
       printf("\n%d is armstrong\n",i );
       }
        }
   }

