#include<stdio.h>
int main()
{
//Series----1--
//1+2+3+...---

    int n,i,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("1+2+3+......+ %d",n);
    for(i=1; i<=n; i=i+1)
    {
        sum= sum+i;
    }
    printf("%d\n",sum);


//Series----1--
//1+3+5+...---
    while(1)
    {
        int n,sum=0,i;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("1+3+5+....+%d",n);
        for(i=1; i<=n; i=i+2)
        {
            sum = sum + i;
        }
        printf(" = %d\n",sum);
    }


//Series----2--
//1+3+5+...---
    int n,sum=0,a=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("1+3+5+.....+%d",n);
    while(a<=n)
    {
        sum= sum +a;
        a = a+ 1;
    }
    printf(" = %d\n",sum);


//Series----2--
//1+3+5+...---
    int n,sum=0,a=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("1+3+5+.....+%d",n);
    while(a<=n)
    {
        sum= sum +a;
        a = a+ 2;
    }
    printf(" = %d\n",sum);


//Series----2--
//2+4+6+...---
    int n,sum=0,a=2;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("2+4+6+.....+%d",n);
    while(a<=n)
    {
        sum= sum +a;
        a = a+ 2;
    }
    printf(" = %d\n",sum);


//Series----2--
//1*2+2*3+3*4+...---
    int n1,n2,sum=0,a=1,b=2;
    printf("Enter n1 and n2 number : ");
    scanf("%d %d",&n1,&n2);
    printf("1.2+2.3+3.4+...+%d.%d",n1,n2);
    while(a<=n1 && b<=n2)
    {
        sum= sum +a*b;
        a = a+ 1;
        b = b+ 1;
    }
    printf(" = %d\n",sum);


//Series----2--
//2.4.6+4.6.8+6.8.10+....---
    while(1)
    {
        int n1,n2,n3,sum=0,a=2,b=4,c=6;
        printf("Enter press n1 n2 and n3 numbers : ");
        scanf("%d %d %d",&n1,&n2,&n3);
        printf("2.4.6+4.6.8+6.8.10+........+%d.%d.%d",n1,n2,n3);
        while(a<=n1 && b<=n2 && c<=n3)
        {
            sum= sum+ a*b*c;
            a=a+2;
            b=b+2;
            c=c+2;
        }
        printf(" = %d\n",sum);
    }


//1+2+3+--series
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number : ");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
        printf("Sum  = %d\n",sum);
    }


//2+4+6+--Odd--series--
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number : ");
        scanf("%d",&n);
        for(i=2; i<=n; i=i+2)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
        printf("Sum  = %d\n",sum);
    }


//1+3+5+7+--Even--series--
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number : ");
        scanf("%d",&n);
        for(i=1; i<=n; i=i+2)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
        printf("Sum  = %d\n",sum);
    }


//1.5+2.5+3.5+---series--
    while(1)
    {
        float n,i,sum=0;
        printf("  Enter any number : ");
        scanf("%f",&n);
        printf("  1.5+2.5+3.5+....+%.2f = \n",n);
        for(i=1.5; i<=n; i++)
        {
            printf("  %.1f\n",i);
            sum=sum+i;
        }
        printf("  Sum  = %.2f\n",sum);
    }


//1^2+2^2+3^2+...-series--
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("1^2+2^2+3^2+....+%d\n",n);
        for(i=1; i<=n; i++)
        {
            sum=sum+i*i;
        }
        printf("Sum  = %d\n",sum);
    }


//1^2+3^2+5^2+...-series--127
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number : ");
        scanf("%d",&n);
        //printf("1^2+3^2+5^2+....+%d\n",n);
        for(i=1; i<=n; i=i+2)
        {
            sum=sum+i*i;
        }
        printf("Sum  = %d\n",sum);
    }


    getch();
}
