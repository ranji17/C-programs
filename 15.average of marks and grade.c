#include<stdio.h>
int main(){
    float m1,m2,m3,tot,avg;
    printf("enter the marks m1,m2,m3: ");
    scanf("\n%f \n%f \n%f",&m1,&m2,&m3);
    tot=m1+m2+m3;
    avg=tot/3;
    if (avg>=70)
        printf("Grade A and the percent is %5.2f",avg);
    else if((avg<70)&&(avg>50))
        printf("Grade B and the percent is %5.2f",avg);
    else
        printf("fail and the percent is %5.2f",avg);

return 0;
}
