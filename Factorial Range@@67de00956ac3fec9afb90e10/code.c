#include<stdio.h>
int factorialRange(int start,int end);

int factorialRange(start,end){
    if(start==1||start==0 ){
        return 1;
    }
    else{
        return end*(factorialRange(end-1));
    }
}