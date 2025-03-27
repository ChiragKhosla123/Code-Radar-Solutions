#include<stdio.h>
int factorialRange(int end);
int main(){
    int start,end;
    scanf("%d%d",&start,&end);
    for(int i=start;i<=end;i++){
        printf("%d\n",factorialRange(i));
    }
    return 0;
}
int factorialRange(int end){
    if(end==1||end==0 ){
        return 1;
    }
    else{
        return end*(factorialRange(end-1));
    }
}