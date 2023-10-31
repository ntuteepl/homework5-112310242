#include <stdio.h>
#include <stdlib.h>

int main()
{
    double h,m,a,b,c;
    scanf("%lf %lf",&h,&m);
    a=30*h+0.5*m;
    b=m*6;
    c=a-b;
    if(c>180)
        c=360-c;
    printf("%.3f\n",c);
}

