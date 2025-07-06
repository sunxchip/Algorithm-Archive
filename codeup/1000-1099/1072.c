#include <stdio.h>

    int main(){
    int n,m;

    scanf("%d", &n);
replay:
    scanf("%d",&m);
    if(n--!=0){
    printf("%d\n",m);
    goto replay;
    }
    return 0;

    }
