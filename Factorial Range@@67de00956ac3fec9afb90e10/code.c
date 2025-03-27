#include<stdio.h>
void factorialRange(int start,int end);
int s=1;
for(int i=start;i<=end;i++){
    s=s*i
}
printf("%d",s);