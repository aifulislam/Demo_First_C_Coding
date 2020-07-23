#include<stdio.h>
#include<math.h>
int main()
{
//Oparetors-------------------
//adding two numbers------------
    int num1,num2,result;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    result= num1+num2;
    printf("Sum = %d",result);

//adding three numbers
    int num1,num2,num3,result;
    float avg;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    result = num1+num2+num3;
    printf("Sum = %d\n",result);
    avg = (float)result/3;
    printf("Avg = %.2f",avg);

//area-------------
    float base,hight,area;
    printf("Enter base: \n");
    scanf("%f",&base);
    printf("Enter hight: \n");
    scanf("%f",&hight);
    area = 0.5*base*hight;
    printf("Area = %.2f",area);

//5.37 - ত্রিভুজের ৩ বাহুর দৈর্ঘ্য এর ক্ষেত্রফল নির্ণয়ের জন্য C program------------
//sqrt(s*(s-a)*(s-b)*(s-c))
//s=(a+b+c)/2
    double a,b,c,s,area;
    printf("Enter 3 values: \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Avrg area = %.2lf",area);

//5.37 - ত্রিভুজের ৩ বাহুর দৈর্ঘ্য এর ক্ষেত্রফল নির্ণয়ের জন্য C program----------
//sqrt(s*(s-a)*(s-b)*(s-c))
//s=(a+b+c)/2
    double a,b,c,sum,area;
    printf("Enter 3 values: \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    sum = (a+b+c)/2;
    area = sqrt(sum*(sum-a)*(sum-b)*(sum-c));
    printf("Avrg area = %.2lf",area);

//5.39 - আয়তক্ষেত্রের ক্ষেত্রফল নির্ণয়ের জন্য C program----------
//averege area = length*width
    double length,width,area;
    printf("Enter length: \n");
    scanf("%lf",&length);
    printf("Enter width: \n");
    scanf("%lf",&width);
    area = width*length;
    printf("Area = %.2lf",area);

//5.41 - বৃত্তের ক্ষেত্রফল নির্ণয়ের জন্য C program----------
//PI =3.1416------------
    float radius,area;
    printf("Enter radius: \n");
    scanf("%f",&radius);
    area = 3.1416*radius*radius;
    printf("Area = %.2f",area);

//pi=3.1416;------------
    float radius,area;
    float pi=3.1416;
    printf("Enter radius: \n");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("Area = %.2f",area);
//M_PI----------------
    float radius,area;
    printf("Enter radius: \n");
    scanf("%f",&radius);
    area = M_PI*radius*radius;
    printf("Area = %.2f",area);

//5.41 - বৃত্তের ক্ষেত্রফল নির্ণয়ের জন্য C program-----------
    float radius,area;
    printf("Enter radius: \n");
    scanf("%f",&radius);
    area = M_PI*radius*radius;
    printf("Area = %.2f",area);

//5.42 Centigrade_to_Fahrenheit_C_program--------
//F = (c*1.8) + 32
   float c,F;
   printf("Enter Centigrade: ");
   scanf("%f",&c);
   F = (c * 1.8) + 32;
   printf("Farn = %.2f",F);
   float c,F;
   printf("Enter Centigrade : ");
   scanf("%f",&c);
   F = (c*1.8) + 32;
   printf("Farn = %.2f",F);

//5.45 - Fahrenheit to Centigrade C program-----------
//C = (f-32)/1.8;
    float C,f;
    printf("Enter Fahrenheit : ");
    scanf("%f",&f);
    C = (f-32)/1.8;
    printf("Centigrade : %.2f",C);

//5.46 - How to swap two numbers with temporary variable------
    int num1 = 10;
    int num2 = 20;
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Num1 = %d\n",num1);
    printf("Num2 = %d\n",num2);


//5.47 - How to swap two numbers without temporary variable--
    int num1 = 10;
    int num2 = 5;
    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;
    printf("Num1 = %d\n",num1);
    printf("Num2 = %d\n",num2);
    int num1 = 10;
    int num2 = 5;
    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;
    printf("Num1 = %d\n",num1);
    printf("Num2 = %d\n",num2);


//5.47___Quadratic_Equation_Algorithm,_Flowchart_&_C_program-------
//d = sqrt(b*b-4*a*c);
//x1 = (-b+d)/2*a;
//x2 = (-b-d)/2*a;
    double a,b,c,d,x1,x2;
    printf("Enter a b c :");
    scanf("%lf %lf %lf",&a,&b,&c);
    d = sqrt(b*b-4*a*c);
    x1 = (-b+d)/2*a;
    x2 = (-b-d)/2*a;
    printf("X1 = %.2lf\n",x1);
    printf("X2 = %.2lf\n",x2);


//5.47___Quadratic_Equation_Algorithm,_Flowchart_&_C_program------
//d=sqrt(b*b-4*a*c)
//x1=(-b+d)/2*a
//x2=(-b-d)/2*a
    double a,b,c,d,x1,x2;
    printf("Enter a b c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    d = sqrt(b*b-4*a*c);
    x1 =(-b+d)/2*a;
    x2 =(-b-d)/2*a;
    printf("X1 = %.2lf\n",x1);
    printf("X2 = %.2lf\n",x2);

   getch();
}
