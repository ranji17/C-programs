#include<stdio.h>
int main(){
    int rem,n,sum=0,temp;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if (temp==sum)
        printf("it is an armstrong number is %d",sum);
    else
        printf("it is not an armstrong number is %d",sum);

return 0;
}

