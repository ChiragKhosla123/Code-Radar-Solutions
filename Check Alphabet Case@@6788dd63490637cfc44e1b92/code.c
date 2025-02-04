#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if('A'<=a<='Z'){
        printf("Uppercase");
    }
    else if('a'<=a<='z'){
        printf("Lowercase");
    }
    return 0;
}