#include<stdio.h>
int main(){
int a;
printf("enter the value a");
scanf("%d",&a);
if (a>0)
    printf("%d is positive integer",a);
else if(a<0)
    printf("%d is negative integer",a);
else
    printf("zero integer");

return 0;
}
