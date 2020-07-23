//area----
#include<stdio.h>
int main()
{
    double a,b,c,s,area;
    printf("enter 3 data--");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area is-- %.2lf\n",area);

    double a,b,c,s,area;
    printf("enter 3 numbers-- ");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("sum = %.2lf",area);

    double a,b,c,s,area;
    printf("enter 3 numbers-- ");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area is %.2lf",area);
    double a,b,c,s,area;
    printf("enter 3 numbers--");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area is-- %.2lf",area);

    getch();
}
