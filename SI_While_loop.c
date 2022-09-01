#include<stdio.h>
int main()
{
    int p,n,count;
    float r,si ;

    count=1;
    while(count<=3)
      {
        printf("Enter values of p,n&r");
        scanf("%i %i %f",&p,&n,&r);

        si=p*n*r/100;

        printf("Simple interest =\n Rs.%f\n\n",si);

        count=count+1;

        
      }
    
       printf("Thanks");
      return 0;
}
