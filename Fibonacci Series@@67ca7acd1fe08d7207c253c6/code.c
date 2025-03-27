#include <stdio.h>
void fibonacciSeries(int n);
void fibonacciSeries(int n){
    int f0=0,f1=1,fib=0;
    printf("%d ",f0);
    for(int i=1;i<n;i++){
        f0=f1;
        f1=fib;
        fib=f0+f1;
        printf("%d ",fib);
    }
}