#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a==2){
        printf("Prime");
    }
    else if(a==1 && a==0 && a==9){
        printf("Not Prime");
    }
    else if(a%a==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}