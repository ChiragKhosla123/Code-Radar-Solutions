#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(1<=a<=100 && a!=0){
        printf("In Range");
    }
    else{
        printf("Out of range");
    }
    return 0;
}