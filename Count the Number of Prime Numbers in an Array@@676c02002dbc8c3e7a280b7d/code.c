#include<stdio.h>
int main(){
    int n,count,pcount=0;
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
            pcount++;
        }
    }
    printf("%d",pcount);
    return 0;
}