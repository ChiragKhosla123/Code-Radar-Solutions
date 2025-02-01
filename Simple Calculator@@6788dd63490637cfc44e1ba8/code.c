#include <stdio.h>

int main() {
    int a,b,c,d,e,f;
    char o;
    scanf("%d%d%c",&a,&b,&c);
    if(o=="+"){
        c=a+b;
        printf("%d",c);
    }
    else if(o=="-"){
        d=a-b;
        printf("%d",d);
    }
    else if(o=="*"){
        e=a*b;
        printf("%d",e);
    }
    else if(o=="/"){
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