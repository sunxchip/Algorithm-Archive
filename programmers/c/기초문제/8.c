//문자열 돌리기
#include <stdio.h>
#define LEN_INPUT 11
#include <string.h>

int main(void) {
    char s1[10];
    scanf("%s", &s1);
    
    int s_size = strlen(s1);
    
    
    
    // while ( 1 <= s_size && s_size <= 10 ){
        for (int i =0; s1[i] != '\0' ; i++)
            printf("%c\n",s1[i]);
    // }
    
    return 0;
}