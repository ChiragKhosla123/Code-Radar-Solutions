#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int *ptr,n;
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Insufficient memory allocation");
        return 1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    int s=ptr[0],t=ptr[0];
    for(int i=0;i<n;i++){
        if(s<ptr[i]){
            s=ptr[i];
        }
        if(t>ptr[i]){
            t=ptr[i];
        }
    }
    printf("%d %d",s,t);
    free(ptr);
    return 0;
}