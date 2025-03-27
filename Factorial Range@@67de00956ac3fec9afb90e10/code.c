#include<stdio.h>
void factorialRange(int start,int end);

void factorialRange(int start,int end){
    for(int i=start;i<=end;i++){
        int s=1;
        for(int j=end;j<=start;j--){
        s=s*i;
        }
        printf("%d\n",s);
    }
}