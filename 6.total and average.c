#include<stdio.h>
int main(){
    int rollno,marks1,marks2,marks3,total,average;
    printf("enter the roll number:");
    scanf("%d",&rollno);
    printf("enter the marks1:");
    scanf("%d",&marks1);
    printf("enter the marks2:");
    scanf("%d",&marks2);
    printf("enter the marks3:");
    scanf("%d",&marks3);
    total=marks1+marks2+marks3;
    average=total/3;
    printf("\n total:%d \n average:%d",total,average);

return 0;
}
