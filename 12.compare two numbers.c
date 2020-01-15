#include<stdio.h>
int main(){
    int a,b;
    printf("enter the number a: ");
    scanf("%d",&a);
    printf("enter the number b: ");
    scanf("%d",&b);
if (a>b)
    printf(" A IS GREATER THAN B");
else if(a<b)
    printf(" B IS GREATER THAN A");
else
    printf(" BOTH ARE EQUAL");
return 0;
}
