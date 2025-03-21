#include<stdio.h>
int main(){
    int n,t,s,z;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(a[i]==a[j]){
                printf("Yes");
                break;
            }
            else{
                printf("No");
                break;
            }
            }
    }
    return 0;
}