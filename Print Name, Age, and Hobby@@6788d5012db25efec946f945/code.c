#include <stdio.h>

int main() {
    char a,c;
    int b;
    scanf("%c%d",&a,&b);
    scanf("%c",&c);
    printf("Name: %c\nAge: %d\nHobby: %c", a,b,c);
    return 0;
}