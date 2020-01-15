#include<stdio.h>
int main(){
    float a,b,c,r1,r2,x;
    printf("enter the values a,b,and c :");
    scanf("%f %f %f",&a,&b,&c);
    x=(b*b)-4*a*c;
    r1=(-b+x)/2*a;
    r2=(-b-x)/2*a;
    if(x>0)
        printf("\n roots are unequal and x is %6.2f",x);
    else if(x<0)
        printf("\n roots are IMAGINARY and x is %6.2f",x);
    else
        printf("\n roots are EQUAL and x is %6.2f",x);
    printf("\nR1=%6.2f",r1);
    printf("\nR2=%6.2f",r2);

return 0;
}
