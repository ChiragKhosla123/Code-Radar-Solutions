#include<stdio.h>
void factorialRange(int start,int end);

void factorialRange(int start,int end){
    if(start<0){
        printf("Invalid range");
    }
    else{
    for(int i=start;i<=end;i++){
        int s=1;
        for(int j=1;j<=i;j++){
        s=s*j;
        }
        printf("%d\n",s);
    }
    }
}