#include <stdio.h>

    int main(){
    int a[24]={};
    int n,i,t;

    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&t);
        a[t]=a[t]+1;
    }
    for (i=1;i<24; i++){
        printf("%d ",a[i]);
    }

    return 0;
    }
