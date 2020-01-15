#include<stdio.h>
int main(){
    int arr[5]={20,40,50,60,70};
    printf("element in an reverse order:",arr[5]);
    for(int i=4;i>=0;i--)
    {

        printf("%d\n",arr[i]);
    }
return 0;
}
