#include<stdio.h>
#include<ctype.h>
int main(){
    unsigned int a;
    scanf("%u",&a);
    if(a&1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}