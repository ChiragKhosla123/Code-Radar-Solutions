#include <stdio.h>

int main() {
    int a,s;
    scanf("%d",&a);
    s = toupper(a);
    printf("Hexadecimal: %x\nOctal: %o", s,a);
    return 0;
}