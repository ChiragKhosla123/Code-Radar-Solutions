#include<stdio.h>
int factorialRange(start,end);
int main(){
    int start,end;
    scanf("%d%d",&start,&end);
    for(int i=start;i<=end;i++){
        printf("%d",factorialRange(i));
    }
    return 0;
}
int factorialRange(start,end){
    if(start==1||start==0 ){
        return 1;
    }
    else{
        return end*(factorialRange(end-1));
    }
}