#include<stdio.h>
struct class{
    int roll_no;
    char name[20];
    float marks;
};
int main(){
    struct class s1[10];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%s%f",&s1[i].roll_no,s1[i].name,&s1[i].marks);
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",s1[i].roll_no,s1[i].name,s1[i].marks);
    }
    return 0;
}