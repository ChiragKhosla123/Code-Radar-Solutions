#include<stdio.h>
void factorialRange(int start,int end);

void factorialRange(int start,int end){
    for(int i=1;i<=end;i++){
        int s=1;
        for(int j=start;j<=end;j++){
        s=s*j;
        }
        printf("%d\n",s);
    }
}