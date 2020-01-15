#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers a,b, and c : ");
    scanf("%d%d%d",&a,&b,&c);
if((a>=b)&&(a>=c))
 {
    if(b>=c)
       {
        printf("descending order %d %d %d",a,b,c);
        printf("\nascending order  %d %d %d",c,b,a);
       }
    else
        {
        printf("descending order %d %d %d",a,c,b);
        printf("\nascending order  %d %d %d",b,c,a);
        }
 }

else if((b>=a)&&(b>=c))
 {

    if(a>=c)
     {


        printf("descending order %d %d %d",b,a,c);
        printf("\nascending order  %d %d %d",c,a,b);
     }
    else
     {
        printf("descending order %d %d %d",b,c,a);
        printf("\nascending order  %d %d %d",a,c,b);
     }
 }
else if((c>=a)&&(c>=b))
 {
    if(a>=b)
    {
        printf("descending order %d %d %d",c,a,b);
        printf("\nascending order  %d %d %d",b,a,c);
    }
    else
    {
        printf("descending order %d %d %d",c,b,a);
        printf("\nascending order  %d %d %d",a,b,c);
    }
 }
return 0;
}

