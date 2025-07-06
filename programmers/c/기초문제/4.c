//대소문자 바꿔서 출력하기
#include <stdio.h>
#define LEN_INPUT 10
#include <ctype.h>


int main(void){
    
    char s1[LEN_INPUT];
    int i =0;
    scanf("%s",s1);
    
    while(s1[i]){
        if (isupper(s1[i]))
        {
            s1[i] = tolower(s1[i]);
        }
        else if (islower(s1[i]))
        {
            s1[i]=toupper(s1[i]);
        }
        i++;
    }
    
    printf(s1);
    return 0;
}

// int main(void) {
//     char s1 [20];
//     scanf("%s", &s1);

//     while (s1!='\0'){
//         if ( s1>= 'A' && s1<= 'Z' )
//             i = i + 32;
//         }
    
//         for ( 65 <= s1[i] && s1[i] <= 90){
//         i + 32;
//     }
    
//     else if ( 97 <= s1[i] && s1[i]<= 122){
//         i-32;
//     }