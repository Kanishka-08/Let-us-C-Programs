#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int deg, res;

    printf("Enter the value of angle in degree ");
    scanf("%d", &deg);

    res = (sin(deg)*sin(deg) + cos(deg)*cos(deg));

    (res==1) ? printf("The sum of squares of sine and cosine is 1"): printf("The sum of squares of sine and cone is NOT 1");

    return 0;

}
