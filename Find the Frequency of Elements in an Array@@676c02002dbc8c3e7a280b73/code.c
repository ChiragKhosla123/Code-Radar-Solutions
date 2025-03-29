//repeat count of digit in arr
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n],freq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        freq[i]=-1;//uncounted
    }
    for(int i=0;i<n;i++){
        int count=1;
        if(freq[i]!=-1){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                freq[j]=0;//counted
            }
        }
        printf("%d %d\n",a[i],count);
    }
    return 0;
}