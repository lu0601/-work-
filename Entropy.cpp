#include <stdio.h>
#include <math.h>
int main()
{
    printf("Please input i1 ~ i4>\n");
    double i1=0, i2=0,i3=0,i4=0;
    scanf("%lf%lf%lf%lf",&i1, &i2,&i3, &i4);
    double result=0;
    result = (-((i1/i2)*log(i1/i2)) - (i3/i4)*log(i3/i4))/log(2);
    printf("%.3f",result);
    return 0;
}
