#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            for(k=1;k<i;k++)
                {
                   printf(" ");
                }

            for(j=i;j<=n;j++)
                {
                    printf("*");
                }


            printf("\n");
        }
return 0;
}
