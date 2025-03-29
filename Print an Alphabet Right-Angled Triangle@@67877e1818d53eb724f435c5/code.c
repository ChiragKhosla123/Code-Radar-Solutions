/*       0 1 2 3                 n=4-1
    0    A
    1    A B
    2    A B C
    3    A B C D*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || j<i){
                printf("%c",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}