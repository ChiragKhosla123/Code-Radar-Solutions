#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],s[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]%2==0){
            if(a[i]<s[i]){
                printf("%d",s[i]);
            }
            else{
                printf("-1");
            }
        }
    }
    return 0;
}