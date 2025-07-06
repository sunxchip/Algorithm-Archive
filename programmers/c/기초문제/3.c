//문자열 반복해서 출력하기
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    
    scanf("%s %d", s1, &a);
    if ( s1 >= 1 && s1 <= 10|| a >= 1 && a <=5){
        for (int i =1 ; i <= a;  i++ ){
            printf("%s",s1);}
    }
    
    return 0;
}