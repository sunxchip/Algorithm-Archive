#include <stdio.h>

    int main(){
    int a[10000];
    int n,min=24;

    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        if (a[i]<min){
            min=a[i];
        }
    }
    printf("%d",min);
    

    return 0;
    }