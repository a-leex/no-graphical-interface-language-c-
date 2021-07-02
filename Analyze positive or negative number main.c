//Analyze the number and see if it is positive or negative

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num;

    printf ("Enter a number:");
    scanf  ("%d", &num);
    if (num>0)
    {
        printf ("\n\nThis number is positive\n");
}
else
{
    printf ("This number is negative");
}
   return 0;
}