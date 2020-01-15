#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the values of a:");
    scanf("%d",&a);
    printf("enter the values of b:");
    scanf("%d",&b);
    printf("before swapping a=%d b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n after swapping a=%d b=%d",a,b);
return 0;
}
