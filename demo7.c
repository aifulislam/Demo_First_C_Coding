#include<stdio.h>
int main()
{
    //scanf() using-------

    int num1,num2;
    printf("Inter first integer_");
    scanf("%d",&num1);

    printf("Inter secound integer_");
    printf("%d",&num2);

    printf("Numbers are : %d %d\n",num1,num2);

    int num1,num2;

    printf("Enter first integer_");
    scanf("%d",&num1);

    printf("Enter secound integer_");
    scanf("%d",&num2);

    printf("Number are : %d %d\n",num1,num2);


    //ntegers-----
    int num1,num2,num3;
    printf("enter two integers__");
    scanf("%d %d %d",&num1,num2,num3);

    scanf("%d",&num2);


//float----
    float num1,num2;
    printf("ple");
    scanf("%f %f",num1,num2);
    printf("Float numbers are __ %f %f\n",num1,num2);

    double a, b, c, d, e, sum;
    printf("please add__");
// integer-data scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    scanf("%lf %lf %lf %lf %lf", &a,&b,&c,&d,&e); //double--data--

    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    sum = a+b+c+d+e;
    printf("sum is: %lf\n",sum);

    getch();
//return 0;
}
