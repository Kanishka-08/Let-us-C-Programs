#include<stdio.h>
int main ()
{
    int pos,neg,zero,num;
    char ans = 'y';
    pos=neg=zero=0;

    while (ans=='y'|| ans=='Y')

    {
       printf("\nEnter a number");
       scanf("%d",&num);

       if(num==0)
        zero++;
       if(num>0)
        pos++;
       if(num<0)
        neg++  ;

       fflush(stdin); 

       printf("\nDO you want to continue?\n(Press y for yes,n for no)"); 
       scanf("%c",&ans);
    }

    printf("\nYOU ENTERED %i positive numbers",pos);
    printf("\nYOU ENTERED %i negative numbers",neg);
    printf("\nYOU ENTERED %i zeroes",zero);

    return 0;
}
