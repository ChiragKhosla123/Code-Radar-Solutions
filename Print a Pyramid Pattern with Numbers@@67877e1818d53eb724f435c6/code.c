/* 0123
 0     1
 1    1 2
 2   1 2 3
 3  1 2 3 4
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*(n-1);j++){
            if(i+j>=n){
                printf("%d ",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}