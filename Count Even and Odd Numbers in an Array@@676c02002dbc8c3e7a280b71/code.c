#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int *ptr,n;
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Insufficient memory allocates");
    }
    int ecount=0,ocount=0;
    for(int i=0;i<n;i++){
        scanf("%d",&ptr);
    }
    for(int i=0;i<n;i++){
        if(abs(*ptr)%2==0){
            ecount++;
        }
        if(abs(*ptr)%2==1){
            ocount++;
        }
    }
    printf("%d %d",ecount,ocount);
    free(ptr);
    return 0;
}