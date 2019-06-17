#include <stdio.h>
#include <math.h>
int main()
{
    printf("Please input i1 ~ i4>\n");
    double i1=0, i2=0,i3=0,i4=0;//...
    scanf("%lf%lf%lf%lf",&i1, &i2,&i3, &i4);//...如果要計算出0.25和0.25的entropy，輸入i1=1, i2=4, i3=1, i4=4 即可
    double result=0;
    result = (-((i1/i2)*log(i1/i2)) - (i3/i4)*log(i3/i4))/log(2);//...
    printf("%.3f",result);
    return 0;
}

//這支程式可以幫住計算出亂度(entropy)，只需輸入i1（分子）,i2（分母）,i3（分子）,i4（分母）...（需要的話可以自行增加）。
//在這裡，我們用2當底，單位是bit，可以換成其他的底就可以變成其他的單位。
