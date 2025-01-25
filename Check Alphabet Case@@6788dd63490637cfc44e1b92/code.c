#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a==toupper(a)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}