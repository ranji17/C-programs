#include<stdio.h>
int main(){
    int age;
    char maritalstatus,gender;
    printf("enter the maritalstatus,gender and age: ");
    scanf("%c %c %d",&maritalstatus,&gender,&age);
    if(maritalstatus=='u')
        {
        if (gender=='m')
           {
            if (age>=21)
                printf("you can marry");
            else
                printf("you are not eligible");
           }
        else if(gender=='f')
            {
            if(age>=18)
                printf("you can marry");
            else
                printf("you are not eligible");

            }
        else
           {
            printf("invalid gender");
           }
        }
    else if(maritalstatus=='m')
     {
        printf("already married you cannot eligible to marry");

     }
     else
     {
         printf("invalid input");
     }

return 0;
}
