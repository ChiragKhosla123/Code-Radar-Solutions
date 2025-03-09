#include <stdio.h>
int main() {
    int n,count,a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        count=0;
        for(int j=1;j<=a;j++){
            if(a%j==0){
                count++;
        }
    }
    if(count==2){
        printf("1");
    }
    else{
        printf("0");
    }
}
    return 0;
}