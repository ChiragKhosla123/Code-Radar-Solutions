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
        int s=0,t=0,y=0;
        for(int j=0;j<i;j++){
        if(s1[j].marks>s){
            s=s1[j].marks;
            t=s1[j].roll_no;
            y=s1[j].name;
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",t,y,s);
    }
    return 0;
}