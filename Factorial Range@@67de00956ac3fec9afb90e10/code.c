#include<stdio.h>
void factorialRange(int start,int end);
int main(){
    int start,end;
    scanf("%d%d",&start,&end);
    factorialRange(start,end);
    return 0;
}
void factorialRange(int start,int end){
    int s=1;
    for(int i=start;i<=end;i++){
        s=s*i;
        printf("%d\n",s);
    }
}