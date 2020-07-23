//using---scanf-------
#include<stdio.h>
int main(){
//using---scanf----integer--data---
    int num1=10;
    printf("press your integer number__");
    scanf("%d",&num1);
    printf("this is our scanf number__ %d\n",num1);
//using---scanf----float--data---
    float num1=20.3443,num2=30.23234;
    printf("please your integer number__");
    scanf("%f",&num1);
    printf("it is scanf number__ %f\n",num1);
    scanf("%f",&num2);
    printf("it is scanf number__ %f\n",num2);
//using---scanf----integer--data---
    int num1,num2;
    printf("Enter first integer number__");
    scanf("%d",&num1);
    printf("Enter secound integer number__");
    scanf("%d",&num2);
    printf("numbers are %d %d\n",num1,num2);
//two--integer--numbers---
    int num1,num2;
    printf("Enter two integer numbers__");
    scanf("%d %d",&num1,&num2);
    printf("numbers are %d %d\n",num1,num2);
//two--float--numbers---
    float num1,num2;
    scanf("%f %f",&num1,&num2);
    //scanf("%f",&num2);
    printf("float numbers are %.2f %f\n",num1,num2);
//integer and float double char numbers tougether--
    int num1;
    float num2;
    double num3;
    char num4;
    printf("plese enter press an integer,float,double and chearter");
    scanf("%d %f %lf %c",&num1,&num2,&num3,&num4);
    printf("integer,float,double and chearter numbers %d %.2f %.3lf %c\n",num1,num2,num3,num4);

    getch();
    return 0;

}
