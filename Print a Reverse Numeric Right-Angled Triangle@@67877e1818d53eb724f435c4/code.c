/*      0 1 2 3               n=4-1
    0   1 2 3 4
    1   1 2 3
    2   1 2
    3   1
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i+j>=n-1){     
                printf("%d ",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}