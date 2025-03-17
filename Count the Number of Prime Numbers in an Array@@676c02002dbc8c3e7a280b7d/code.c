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
        for(int i=1;i<=a[i];i++){
            if(a[i]%i==0){
                count++;
            }
        }
        if(count==2){
            printf("%d",i);
        }
        else{
            printf("0");
        }
    }
    return 0;
}