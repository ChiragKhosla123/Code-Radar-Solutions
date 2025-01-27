#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a=="a" || a=="e" || a=="i" || a=="o" || a=="u"){
        printf("Vowel");
    }
    else if(a==isalpha(a)){
        printf("Consonent");
    }
    else if(a==isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}