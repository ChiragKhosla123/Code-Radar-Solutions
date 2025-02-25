#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            printf(" ");
            for(int j=i;j>=1;j++){
                printf("* ");
            }
            printf("");
        }
    }
    return 0;
}