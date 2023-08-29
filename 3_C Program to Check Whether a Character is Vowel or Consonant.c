#include<stdio.h>
main(){
    char character;
    printf("Enter the character: ");
    scanf("%c",&character);
    if (character=='a'||character=='e'||character=='i'||character=='o'||character=='u'||character=='A'||character=='E'||character=='I'||character=='O'||character=='U')
    {
        printf ("\nThe character %c is vowel.\n",character);
    }
    else
        {
            printf("\nThe character %c is consonant.\n",character);
        }

    }
