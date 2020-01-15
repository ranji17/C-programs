#include<stdio.h>
int main(){
    int i=1,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i;i<=10;i++)
        {
            printf("%d X %d=%d\n",i,n,i*n);
        }
return 0;
}
