#include<stdio.h>
int factorialRange(int start,int end);


    if(end==1||end==0 ){
        return 1;
    }
    else{
        return end*(factorialRange(end-1));
    }
