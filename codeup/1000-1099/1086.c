#include <stdio.h>

    int main(){
    double w,h,b;
    
    scanf("%lf %lf %lf",&w,&h,&b);

    double mb = (w*h*b);

    printf("%.2lf MB\n",mb/8388608);

    }
