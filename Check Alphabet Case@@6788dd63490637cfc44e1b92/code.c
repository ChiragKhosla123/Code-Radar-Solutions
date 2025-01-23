#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a=="%C"){
        printf("Uppercase");
    }
    else if(a=="%c"){
        printf("Lowercase");
    }
    return 0;
}