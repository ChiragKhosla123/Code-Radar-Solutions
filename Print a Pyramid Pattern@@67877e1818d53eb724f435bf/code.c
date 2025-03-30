#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<((2*n)-1);j++){
            if(i+j>=2*n-i-2){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}