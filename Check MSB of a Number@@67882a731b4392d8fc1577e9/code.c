#include<stdio.h>
int main(){
    long unsigned int a;
    scanf("%lu",&a);
    if(1&a){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}