/*math.h--abs/sqrt/pow/log/log10/exp/
sin/cos/tan/round/trunc/ceil/floor()--*/
#include<stdio.h>
#include<math.h>
int main()
{
//absolute number--
    int result=abs(25);//-25==25
    printf("%d\n",result);
    int result=abs(-25);
    printf("absolute number== %d",result);
    int result=abs(-30);
    printf("Absolute number== %d\n",result);


//Square root--sqrt()--
    double result=sqrt(36);//1
    printf("Square root number== %.2lf\n",result);
    int x;  //2
    printf("Enter any number--");
    scanf("%d",&x);
    double result =sqrt(x);
    printf("squre root number is== %.2lf",result);
    int x;
    printf("enter any number--");
    scanf("%d",&x);
    double result=sqrt(x);
    printf("result is== %.2lf\n",result);


//power--pow()--
    double result=pow(x,y);//1
    printf("your power number-- %.2lf\n",result);
    int x,y;  //2
    printf("Enter x== ");
    scanf("%d",&x);
    printf("Enter y== ");
    scanf("%d",&y);
    double result=pow(x,y);
    printf("your power number-- %.2lf\n",result);

    int x,y;
    printf("enter x__ ");
    scanf("%d",&x);
    printf("enter y__ ");
    scanf("%d",&y);
    double result=pow(x,y);
    printf("your power number== %.2lf",result);

    int x,y;
    printf("enter x== ");
    scanf("%d",&x);
    printf("enter y== ");
    scanf("%d",&y);
    double result=pow(x,y);
    printf("your power== %.2lf",result);


//log/log10/exp/sin/cos/tan()---
    double x=10.5;
    double result=log(x);//log
    printf("log(%lf) = %lf\n",x,result);

    double x=1;
    double result=log10(x);//log10
    printf("log10(%lf)== %lf",x,result);

    double x=1;
    double result=exp(x);//exp---
    printf("exp(%lf)== %lf",x,result);

    double x;
    printf("enter esp num--");
    scanf("%lf",&x);
    double result=log10(x);//sin---
    printf("log10(%lf)== %lf\n",x,result);

    double x;
    printf("enter cos result--");
    scanf("%lf",&x);
    double result=cos(x);//sin---
    printf("cos(%lf)== %lf\n",x,result);
//round/trunc/ceil/floor-----
//-1.6== -1.00//ceil
//-1.6== -2.00//floor
    double x;
    printf("enter round press== ");
    scanf("%lf",&x);
    double result=ceil(x);
    printf("round num (%lf)== %.3lf",x,result);


    getch();
}
