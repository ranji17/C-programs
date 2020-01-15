#include<stdio.h>
int main(){
    int i=1,n,sum=0,newnum;
    printf("enter the digits:");
    scanf("%d",&n);
    printf("numbers are:\n");
    for(i;i<=n;i++)
        {

            scanf("%d",&newnum);
            sum=sum+newnum;

        }
        printf("sum of numbers:%d",sum);


return 0;
}
