#include<stdio.h>
int main(){
    int i=1,n;
    printf("enter the range n:");
    scanf("%d",&n);
    i=n;

    do{
        printf("\n%d",i);
        i--;
      }while(i>=1);
return 0;
}
