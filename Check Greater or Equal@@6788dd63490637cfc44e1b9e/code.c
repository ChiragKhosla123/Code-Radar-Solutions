#include <stdio.h>

int main() {
    float a,b;
    scanf("%f%f",&a,&b);
    if(a>b){
        printf("Yes");
    }
    else if(a<=b){
        printf("No");
    }
    return 0;
}