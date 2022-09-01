#include<stdio.h>
int main ()
{
    int hr , ot,emp;

    
    emp=1;

    while( emp<=10)
        {  printf("Please enter the no of hours worked");
           scanf("%i",&hr);

          
          if(hr>40)
            { ot=120*hr;
              printf("Overtime pay is\n %i\n",ot);
              emp=emp+1;
            }  
          else 
              printf("You are not eligible for overtime pay\n");  
        }

     printf("Limit of employees finished") ;  

     return 0;     
}