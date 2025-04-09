#include <stdio.h>
struct class{
    int roll_no;
    char name[20];
    float marks;
};
int main(){
    struct class s1[20];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%s%f",&s1[i].roll_no,s1[i].name,&s1[i].marks);
    }
    for(int i=0;i<n;i++){
        int s=0,t=0;
        char y[n]={0};
        for(int j=0;j<i;j++){
        if(s1[i].marks>s){
            s=s1[i].marks;
            t=s1[i].roll_no;
            y[i]=s1[i].name;
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",t,y[i],s);
    }
    return 0;
}