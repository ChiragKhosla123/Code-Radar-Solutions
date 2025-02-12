#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            printf("%d",n);
        }
        printf("\n");
    }
}