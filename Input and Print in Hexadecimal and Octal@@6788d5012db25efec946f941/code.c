#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    char s = toupper(a);
    printf("Hexadecimal: %x\nOctal: %o", s,a);
    return 0;
}