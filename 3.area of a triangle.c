#include<stdio.h>
int main(){
    float P,N,R,SI;
    printf("enter the values of P,N AND R: ");
    scanf("%f%f%f",&P,&N,&R);
    SI=(P*N*R)/100;
    printf("SIMPLE INTEREST:%6.2f",SI);
return 0;
}
