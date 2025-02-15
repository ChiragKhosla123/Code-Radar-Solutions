#include<stdio.h>
int main(){
    unsigned int a;
    scanf("%u",&a);
    if(1&a){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}