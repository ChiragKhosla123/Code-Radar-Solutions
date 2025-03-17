#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        count=0;
        for(int j=1;j<=a[i];j++){
            if(a[i]%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d",count);
        }
        else{
            printf("0");
        }
    }
    return 0;
}