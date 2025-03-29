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
    for(int i=0;i<=n;i++){
        for(int j=0;j<=2*(n-1);j++){
            if(i+j>=2*(n-1)){
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