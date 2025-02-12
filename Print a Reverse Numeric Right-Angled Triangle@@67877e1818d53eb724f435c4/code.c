#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i<=1;i--){
        for(int j=i;j>=j;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}