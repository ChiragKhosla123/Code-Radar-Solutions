#include <stdio.h>

int main() {
    int a,b,c,d,e,f;
    char operate;
    scanf("%d%d%c",&a,&b,&c);
    getchar();
    if(operate=="+"){
        c=a+b;
        printf("%d",c);
    }
    else if(operate=="-"){
        d=a-b;
        printf("%d",d);
    }
    else if(operate=="*"){
        e=a*b;
        printf("%d",e);
    }
    else if(operate=="/"){
        if(b!=0){
            f=a/b;
            printf("%d",f);
        }
        else{
            printf("error");
        }
    }
    else{
        printf("error");
    }
    return 0;
}