// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && i &&j== n-2){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}