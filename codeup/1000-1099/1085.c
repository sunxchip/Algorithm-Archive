#include <stdio.h>

    int main(){
    double h,b,c,s;
    
    scanf("%lf%lf%lf%lf",&h,&b,&c,&s);

    double mb = (h*b*c*s);

    printf("%.1lf MB\n",mb/8388608);

    }
