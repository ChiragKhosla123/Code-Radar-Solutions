// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<a[i];j++){
            if(a[i]==a[j]){
                printf("%d",a[i]);
            }
        }
    }
    return 0;
}