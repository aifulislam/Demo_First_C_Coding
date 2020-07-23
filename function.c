#include<stdio.h>
//return_type function_name(arguments)
int sum(int a, int b)
{
    return a+b;
}
int main()
{
//197 - Function - Sum of 2-3 numbers
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    //int sum = num1 + num2;

    printf("Sum = %d\n",sum(num1,num2));

    getch();
}


int sum(int p, int o)
{
    return p+o;
}
int main()
{
//197 - Function - Sum of 2-3 numbers
    int num1,num2;
    printf("Wnter two numbers: \n");
    scanf("%d %d",&num1,&num2);
    //int sum = num1+ num2;
    printf("Sum = %d\n",sum(num1,num2));

    getch();
}


int sum(int a,int b)
{
    return a*b;
}
int main()
{
    int num1,num2;
    printf("Enter two numbers: \n");
    scanf("%d %d",&num1,&num2);
    //int sum = num1 - num2;
    printf("sum = %d\n",sum(num1,num2));

    getch();
}


int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int num1,num2;
    printf("Enters two numbers : \n");
    scanf("%d %d",&num1,&num2);
    int result = sum(num1,num2);
    printf("Sum = %d\n",result);

    getch();
}


int sum(int a, int b)
{
    return a-b;
}
int main()
{
    int num1,num2;
    printf("Enter two numbers: \n");
    scanf("%d %d",&num1,&num2);
    //int sum = num1 - num2;
    int result= sum(num1,num2);
    printf("sum = %d\n",result);

    getch();
}


//197 - Function - Sum of 2-3 numbers
int sum(int a, int b, int c)
{
    printf("Sum = %d\n",a+b+c);
}
int sub(int a, int b)
{
    printf("Sub =%d\n",a-b);
}
int mul(int a, int b)
{
    printf("Sub =%d\n",a*b);
}
int div(int a, int b)
{
    printf("Sub =%d\n",a/b);
}

//198 - Function - Square of a number
int square(int a)
{
    return a*a;
}
//199 - Function - Area of a Triangle
double triangleArea(double b, double h)
{
    return 0.5*b*h;
}
int main()
{
    //199 - Function - Area of a Triangle
    double base, high;
    printf("Enter base: ");
    scanf("%lf",&base);
    printf("Enter high: ");
    scanf("%lf",&high);
    double area = triangleArea(base, high);
    printf("Area  = %.lf\n",area);
    printf("\n");
    //198 - Function - Square of a number
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    //int result = num*num;
    int result = square(num);
    printf("pop = %d\n",result);
    printf("\n");
    ////197 - Function - Sum of 2-3 numbers
    sum(10,20,30);
    sum(40,50,60);
    printf("\n");
    sub(20,10);
    sub(30,10);
    printf("\n");
    mul(10,10);
    mul(20,10);
    printf("\n");
    div(20,10);
    div(30,10);

    getch();
}


//199 - Function - Area of a Triangle
double traiangel(double b, double h)
{
    return 0.5*b*h;
}
int main()
{
    double base,high;
    printf("Enter base: ");
    scanf("%lf",&base);
    printf("Enter high: ");
    scanf("%lf",&high);
    double area = traiangel(base,high);
    printf("Area = %.2lf",area);

    getch();
}


//201 - X To The Power Y using User-defined Function
double powerCalculator(double base,double esp)
{
    double result=1,i;
    for(i=1; i<=esp; i++)
    {
        result = result * base;
    }
    printf("Result = %.2lf\n",result);
}
//200 - x to the power y (using -not using) Library function
int main()
{
    double base,esp,result;
    printf("Enter base: ");
    scanf("%lf",&base);
    printf("Enter esp: ");
    scanf("%lf",&esp);
    result = pow(base,esp);
    printf("Result = %lf\n",result);

    double base, esp;

    printf("Enter base: ");
    scanf("%lf",&base);

    printf("Enter esp: ");
    scanf("%lf",&esp);
    //x to the power y using Library function
    result = pow(base,esp);
    printf("Result = %.2lf\n",result);

    //x to the power y not using Library function
    for(i=1; i<=esp; i++)
    {
        result = result * base;
    }
    printf("Result = %.2lf\n",result);
    //201 - X To The Power Y using User-defined Function
    powerCalculator(base,esp);

    getch();
}


//202 - Passing Array to function
void display(int x[])
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d\n",x[i]);
    }
}
int main()
{
    int nam[] = {10,20,30,40,50};
    display(nam);

    getch();
}


//202 - Passing Array to function
void display(int x[])
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d\n",x[i]);
    }
}
int main()
{
    int nam[]={10,20,30,40,50};
    display(nam);

    getch();
}


void display(int num[])
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ",num[i]);
    }
}
int main()
{
    int num[] = {10,20,30,40,50};
    display(num);

    getch();
}


void display(int num[])
{
    int i;
    for (i=0; i<5; i++)
    {
        printf("%d ",num[i]);
    }
}

int main()
{
    int num[]={10,20,30,40,50};
    display(num);

    getch();
}
void display(int nam[])
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ",nam[i]);
    }
}
int main()
{
    int nam[]= {10,20,30,40,50};
    display(nam);

    getch();
}


//203 - finding maximum value from an array using function
int maximum(int x[])
{
    int i;
    int max = x[0];
    for (i=1; i<5; i++)
    {
        if(max <x[i])
            max = x[i];
    }
    return max;
}

int main()
{
    int num[]={10,20,30,40,50};
    int maximumValue = maximum(num);
    printf("Maximum = %d\n",maximumValue);

    getch();
}*/
//203 - finding maximum value from an array using function
int maximum(int x[])
{
    int i;
    int max= x[0];
    for(i=1; i<5; i++)
    {
        if(max <x[i])
            max = x[i];
    }
    return max;
}
int main()
{
    int nam[]= {10,20,80,40,50};
    int maximumValue = maximum(nam);
    printf("maximum = %d",maximumValue);

    getch();
}


//203 - finding maximum value from an array using function
int maximaum(int x[])
{
    int i;
    int max = x[0];
    for(i=1; i<5; i++)
    {
        if(max <x[i])
            max = x[i];
    }
    return max;
}
int main()
{
    int nam[]= {10,20,90,40,50};
    int maximaumValue=maximaum(nam);
    printf("maximum = %d ",maximaumValue);

    getch();
}


//203 - finding maximum value from an array using function
int maximum(int x[])
{
    int i;
    int max= x[0];
    for(i=1; i<5; i++)
    {
        if(max <x[i])
            max = x[i];
    }
    return max;
}
int main()
{
    int nam[]= {40,80,44,6,71};
    int maximumValue=maximum(nam);
    printf("Maximum = %d ",maximumValue);

    getch();
}


//203 - finding minimum value from an array using function
int minimum(int x[])
{
    int i;
    int min= x[0];
    for(i=1; i<6; i++)
    {
        if(min >x[i])
            min = x[i];
    }
    return min;
}
int main()
{
    int nam[]= {40,55,80,44,6,71};
    int minimumValue=minimum(nam);
    printf("Maximum = %d ",minimumValue);

    getch();
}


//204 - Passing String to function
void display(char s1[])
{
    int i;
    while(s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }
}
int main()
{
    char str[]="ARIFUL ISLAM";
    display(str);

    getch();
}


//204 - Passing String to function
void display(char s1[])
{
    int i;
    while(s1[i]!='\0')
    {
        printf("%c ",s1[i]);
        i++;
    }
}
int main()
{
    char str[]="ARIFUL ISLAM";
    display(str);

    getch();
}


//204 - Passing String to function
void display(char s1[])
{
    int i;
    while(s1[i]!='\0')
    {
        printf("%c ",s1[i]);
        i++;
    }
}
int main()
{
    char str[]="ARIFUL ISLAM";
    display(str);

    getch();
}


//206 - Factorial Using Recursion
int fact(int n)
{
    if(n==1)
        return 1;
    else
       return n*fact(n-1);
}
int main()
{
    int result= fact(5);
    printf("Factorial of 5 = %d",result);

    getch();
}


//206 - Factorial Using Recursion
int fact(int n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);
    }
int main()
{
    int result=fact(5);
    printf("Factorial of 5 = %d",result);

    getch();
}


//206 - Factorial Using Recursion
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int result=fact(5);
    printf("Factorial of 5 = %d",result);

    getch();
}


//206 - Factorial Using Recursion
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int result=fact(6);
    printf("Factorial of 6 = %d",result);

    getch();
}
