#include<stdio.h>
int printPrimeInRange(int a,int b);
int printPrimeInRange(int a,int b){
    for(int i=a;i<=b;i++){
        int count=0;
        for(int j=1;j<=i;j++){
        if(n%j==0){
            count++;
        }
    }
    if(count==2){
        return i;
    }
    }
}