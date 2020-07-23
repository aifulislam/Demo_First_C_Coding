//test 2--operator--
#include<stdio.h>
int main(){
//add two nubmbers--
    int num1,num2,sum;
    float avg;
    printf("enters two numbers--");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("sum is--  %d\n",sum);
    avg=(float)sum/2;
    printf("avg is %.2lf\n",avg);
    int num1,num2,sum;
    float avg;
    printf("enter two numbers--");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("sum = %d\n",sum);
    avg=(float)sum/2;
    printf("avg is-- %.2f\n",avg);


//+ - * / % all twogether--
    int num1,num2,result;
    printf("enter two numbers --");
    scanf("%d %d",&num1,&num2);
    result=num1+num2;
    printf("sum = %d\n",result);
    result=num1-num2;
    printf("num = %d\n",result);
    result=num1*num2;
    printf("mul = %d\n",result);
    result=num1/num2;
    printf("div = %d\n",result);
    result=num1%num2;
    printf("remainder = %d",result);


//area----
    float base,height,area;
    printf("enter base--");
    scanf("%f",&base);
    printf("enter height--");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("area = %.2f",area);

//adding three numbers and out put avg--
    int num1,num2,num3,sum;
    float avg;
    printf("enter three num--");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("sum = %d\n",sum);
    avg=(float)sum/3;
    printf("avg is-- %.2f",avg);


getch();
//return 0;
}
