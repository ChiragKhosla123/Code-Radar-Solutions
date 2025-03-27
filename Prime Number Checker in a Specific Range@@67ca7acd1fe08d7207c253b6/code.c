#include<stdio.h>
int printPrimesInRange(int a,int b);
int printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        int count=0;
        int t=i;
        for(int j=1;j<=t;j++){
        if(t%j==0){
            count++;
        }
    }
    if(count==2){
        printf("%d ",i);
    }
    else if(count!=2){
        printf("No prime numbers");
    }
    }
}