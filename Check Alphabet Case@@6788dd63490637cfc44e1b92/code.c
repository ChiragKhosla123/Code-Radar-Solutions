#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a=="A"){
        printf("Uppercase");
    }
    else if(a=="a"){
        printf("Lowercase");
    }
    return 0;
}