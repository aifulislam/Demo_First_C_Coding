#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
//programm_1
    //clrscr();
    printf("Bangladesh Technical Education Board : \n");
    //return 0;

//programm_2:
    int num1,num2,result;
    num1 = 10;
    num2 = 20;
    result = num1+num2;
    printf("Summation is %d",result);

//programm_2:
    int num1,num2,result;
    num1 = 10;
    num2 = 20;
    result = num1+num2;
    printf("Summation is = %d",result);

//programm_3:
    int num1,num2,resulrt;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    resulrt = num1+num2;
    printf("Summation is = %d",resulrt);

//programm_3:
    int num1,num2,result;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    result=num1+num2;
    printf("Summation is = %d",result);

//programm_4: Add,sub,mult,div,rema
    int num1,num2,add,sub,mult,div,rema;
    printf("Enter tow numbers: ");
    scanf("%d %d",&num1,&num2);
    add = num1+num2;
    sub = num1-num2;
    mult = num1*num2;
    div = num1/num2;
    rema = num1%num2;
    printf("Add = %d\n",add);
    printf("sub = %d\n",sub);
    printf("mult = %d\n",mult);
    printf("div = %d\n",div);
    printf("rema = %d\n",rema);

//programm_5:
    float x,result;
    printf("Enter the result: ");
    scanf("%f",&x);
    result=x*x*x;
    printf("Result is: %.2f",result);


//programm_5:
    float x,result;
    printf("Enter the result: ");
    scanf("%f",&x);
    result = x*x*x;
    printf("Summation is: %.2f",result);


    getch();
}
