#include<stdio.h>
#include<math.h>
int main()
{
//5.49 - Math - Absolute value - সংখ্যার পরম মান----------
    int result = abs(27);
    printf("%d",result);
    //abs()------------------------
    int result = abs(-25);
    printf("%d",result);


//5.50 - Math - Square root - সংখ্যার বর্গমূল---------
    double result = sqrt(49);
    printf("%.2lf",result);

    //sqrt()---------
    int x;
    printf("Enter sqrt number : \n");
    scanf("%d",&x);
    double result = sqrt(x);
    printf("%.2lf",result);

    //sqrt-----------
    int x;
    printf("Enter any sqrt : \n");
    scanf("%d",&x);
    double result = sqrt(x);
    printf("%.2lf",result);


//5.51 - Math - x raised to the power y (x^y)---------
    int x,y;
    printf("Enter power : \n");
    printf("Enter X : ");
    scanf("%d",&x);
    printf("Enter Y : ");
    scanf("%d",&y);
    double result = pow(x,y);
    printf("Power = %.2lf",result);

//5.51 - Math - x raised to the power y (x^y)
    int x,y;
    printf("Enter power numbers : \n");
    printf("X : ");
    scanf("%d",&x);
    printf("Y : ");
    scanf("%d",&y);
    double result = pow(x,y);
    printf("Power = %.2lf",result);


//5.52 - Math - log, log10, sin function
    //log()without scanf()
    double x =10.5;
    double result = log(x);
    printf("log(%.2lf) = %.2lf \n",x,result);

    //log() with scanf()-----------
    float x;
    printf("Enter log numbers : \n");
    printf("X : ");
    scanf("%fl",&x);
    double result= log(x);
    printf("log(%.2lf) = %.2lf \n",x,result);


//5.52 - Math - log,log10,exp,sin,cos,tan function--------
    //log10()--------
    float x;
    printf("Enter log10 : \n");
    printf("X : ");
    scanf("%f",&x);
    double result = log10(x);
    printf("log(%.2lf) = %.2lf \n",x,result);

    //exp()--------------
    double x;
    printf("Enter exp : \n");
    printf("X : ");
    scanf("%lf",&x);
    double result = exp(x);
    printf("exp(%.2lf) = %.2lf \n",x,result);

    //sin,cos,tan---------
    double x;
    printf("Enter sin number : \n");
    printf("Sin : ");
    scanf("%lf",&x);
    double result = sin(x);
    printf("sin(%.2lf) = %.2lf \n",x,result);


//5.53 - Math - round, trunc, ceil, floor function----------
    //round---------
    double x = 5.45;
    double result = round(x);
    printf("round(%.2lf) = %.2lf \n",x,result);

    //round---------
    float x;
    printf("Enter round : \n");
    printf("x = ");
    scanf("%f",&x);
    double result = round(x);
    printf("round(%.2lf) = %.2lf \n",x,result);

    //trunc()------------
    double x = -5.9314;
    double result = trunc(x);
    printf("trunc(%.2lf) = %.2lf \n",x,result);


    //celi()--------------
    double x=2.863;
    double result = ceil(x);
    printf("celi(%.2lf) = %.2lf \n",x,result);

    //floor()---------
    double x=2.863;
    double result = floor(x);
    printf("floor(%.2lf) = %.2lf \n",x,result);


    getch();
}
