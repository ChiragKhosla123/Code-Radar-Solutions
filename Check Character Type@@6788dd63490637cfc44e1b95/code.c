#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=="a" || a=="e" || a=="i" || a=="o" || a=="u"){
        printf("Vowel");
    }
    else if(isalpha(a)){
        printf("Consonent");
    }
    else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}