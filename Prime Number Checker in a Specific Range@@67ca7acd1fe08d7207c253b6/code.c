#include<stdio.h>
void printPrimesInRange(int a,int b);
void printPrimesInRange(int a,int b){
    int found;
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
        found=1;
    }
    }
    if(!found){
        printf("No prime numbers");
    }
    
}