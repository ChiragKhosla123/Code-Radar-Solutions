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
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j<=n){     
                printf("%d ",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}