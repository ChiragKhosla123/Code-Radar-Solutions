#include <stdio.h>
#include <stdlib.h>
int main(){
    int ptr,n;
    scanf("%d",&n);
    ptr=(int*)alloc(n,sizeof(int));
    if(ptr==NULL){
        printf("Insufficient memory allocated");
        return 1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    int pcount=0;
    for(int i=0;i<n;i++){
        if(ptr[i]%i==0){
            pcount++;
        }
    }
    printf("%d",pcount);
    return 0;
}