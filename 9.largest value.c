#include<stdio.h>
int main(){
int a,b;
printf("enter the value a");
scanf("%d",&a);
printf("enter the value b");
scanf("%d",&b);
if (a>b)
    printf("largest value is %d and A is greater than B",a);
else
    printf("largest value is %d and B is greater than A",b);
return 0;
}
