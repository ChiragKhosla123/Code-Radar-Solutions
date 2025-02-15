#include <stdio.h>

int main() {
    unsigned int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
    printf("%u",i%2);
    }
    return 0;
}