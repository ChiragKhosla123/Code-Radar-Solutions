#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],s=-1,t;
    for(int i=0;i<abs(n);i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            if(a[i]>s){
                s=a[i];
            }
        }
    }
    printf("%d",s);
    return 0;
}