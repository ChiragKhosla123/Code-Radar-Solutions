#include <stdio.h>
int function(int a);
int main() {
    int n,count;
    scanf("%d",&n);
    count=function(n);
    if(count==2){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
int function(int n){
    int count=0;
for(int i=1;i<=n;i++){
    if(n%i==0){
        count++;
    }
}
return count;
}