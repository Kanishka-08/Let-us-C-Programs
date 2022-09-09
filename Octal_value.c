#include <stdio.h>
#include<math.h>
int main ()
{
    int num,r,oct,count;

    printf("Please enter number to find its octal equivalent");
    scanf("%i",&num);

    count=0;
    oct=0;

    while(num!=0)
    {
        r=num%8;
        oct=oct+r*pow(10,count);
        num=num/8;
        count++;
    }

     printf("\n\nOCTAL EQUIVALENT IS %i ",oct);

    return 0;

}