#include<stdio.h>
#include<math.h>
int main()
{
//area-----------
//area=length*width;
    float length,width,area;
    printf("Enter lenhth-- ");
    scanf("%f",&length);
    printf("Enter width-- ");
    scanf("%f",&width);
    area=length*width;
    printf("Area == %.2f\n",area);

    float length,width,area;
    printf("Enter Length--");
    scanf("%f",&length);
    printf("Enter Width--");
    scanf("%f",&width);
    area=length*width;
    printf("Area is== %.2f",area);
//Radius-----------
//PI=3.1415 Or PI Or M_PI--
    float radius,area;
    printf("Enter radius--");
    scanf("%f",&radius);
    area=3.1416*radius*radius;
    printf("Area of sircle-- %.2f\n",area);

    float radius,area;
    printf("Enter radius__");
    scanf("%f",&radius);
    area=M_PI*radius*radius;
    printf("Area is__ %.2f",area);
//Centigrade to Faranite covert---
//F = (c*1.8)+32;
    float c,F;
    printf("Enter Centigrade--");
    scanf("%f",&c);
    F = (c*1.8)+32;
    printf("Faranite is__ %.2f",F);
//F =(c*1.8)+32
    float c,F;
    printf("Enter centrigrade-- ");
    scanf("%f",&c);
    F=(c*1.8)+32;
    printf("your Faranite-- %.2f",F);
//F =(c*1.8)+32
    float c,F;
    printf("Enter Centtrigrade--");
    scanf("%f",&c);
    F=(c*1.8)+32;
    printf("your Faranite-- %.2f",F);
//F=(c*1.8)+32
    float c,F;
    printf("Enter Faranite scele--");
    scanf("%f",&c);
    F=(c*1.8)+32;
    printf("Centigrade scele-- %.2f",F);
//Faranite to Centigrade covert---
//c=(F-32)/1.8
    float c,F;
    printf("Enter Faranite-- ");
    scanf("%f",&F);
    c=(F-32)/1.8;
    printf("your Centrigrade-- %.2f\n",c);
//c=(F-32)/1.8
    float c,F;
    printf("Enter Faranite-- ");
    scanf("%f",&F);
    c=(F-32)/1.8;
    printf("your centrigrde-- %.2f",c);
//c=(F-32)/1.8
    float c,F;
    printf("Enter Faranite--");
    scanf("%f",&F);
    c=(F-32)/1.8;
    printf("your centrigrade-- %.2f\n",c);
//Swap number--
    int num1=10;
    int num2=5;
    int temp;
    temp= num1;//1
    num1=num2;
    num2=temp;
    printf("num1= %d\n",num1);
    printf("num2= %d\n",num2);

    int num1=10;
    int num2=5;
    int temp;
    num1=num1-num2;//2
    num2=num1+num2;
    num1=num2-num1;
    printf("num1= %d\n",num1);
    printf("num2= %d\n",num2);


    getch();
    //return 0;
}
