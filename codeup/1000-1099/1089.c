#include <stdio.h>

    int main(){
    int a,b,n;
    int i;

    scanf("%d %d %d",&a,&b,&n);

    int sum=a;

    for( i=1; i<n; i++){
        sum+=b;
    } 
    printf("%d",sum);
    return 0;
    }
