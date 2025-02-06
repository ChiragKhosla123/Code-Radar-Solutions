#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=3 && b>=3 && c>=3){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}