#include<stdio.h>
int main()
{
//series----1---using-for-loop---
//1+2+3+......n--
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("1+2+3+.....+%d",n);
        for(i=1; i<=n; i++)
        {
            sum=sum+i;
        }
        printf(" = %d\n",sum);
    }


//Series-----1--using-for-loop--
//1+3+5+......n--
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number :");
        scanf("%d",&n);
        printf("1+3+5+.....+%d",n);
        for(i=1; i<=n; i=i+2)
        {
            sum= sum+i;
        }
        printf(" = %d\n",sum);
    }


//Series---2--using-while-loop--
//1+2+3+......n--
    while(1)
    {
        int n,sum=0,a=1;
        printf("Enter any number :");
        scanf("%d",&n);
        printf("1+2+3+.....+%d",n);
        while(a<=n)
        {
            sum=sum+a;
            a=a+1;
        }
        printf(" = %d\n",sum);
    }


//Series---2--using-while-loop--
//1+2+3+......n--
    while(1)
    {
        int n,sum=0,a=1;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("1+2+3+....+%d",n);
        while(a<=n)
        {
            sum=sum+a;
            a=a+1;
        }
        printf(" = %d\n",sum);
    }


//Series---2--using-while-loop--
//1+3+5+......n--
    while(1)
    {
        int n,sum=0,a=1;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("1+3+5+....+%d",n);
        while(a<=n)
        {
            sum=sum+a;
            a=a+2;
        }
        printf(" = %d\n",sum);
    }


//Series--3---using-while-loop--
//1.2+2.3+3.4+......n--
    while(1)
    {
        int n1,n2,sum=0,a=1,b=2;
        printf("Enter n1 and n2 number : ");
        scanf("%d %d",&n1,&n2);
        printf("1.2+2.3+3.4+......+%d %d",n1,n2);
        while(a<=n1 && b<=n2)
        {
            sum=sum+a*b;
            a=a+1;
            b=b+1;
        }
        printf(" = %d\n",sum);
    }


//Series--3---using-while-loop--
//1.2+2.3+3.4+......n--
    while(1)
    {
        int n1,n2,sum=0,a=1,b=2;
        printf("Enter n1 and n2 numbers : ");
        scanf("%d %d",&n1,&n2);
        printf("1.2+2.3+3.4+.....+%d %d",n1,n2);
        while(a<=n1 && b<=n2)
        {
            sum= sum+a*b;
            a= a+1;
            b= b+1;
        }
        printf(" = %d",sum);
    }


//Series--3---using-while-loop--
//1.3+2.5+3.7+......n--
    while(1)
    {
        int n1,n2,sum=0,a=1,b=3;
        printf("Enter n1 and n2 numbers : ");
        scanf("%d %d",&n1,&n2);
        printf("1.3+2.5+3.7+.....+%d %d",n1,n2);
        while(a<=n1 && b<=n2)
        {
            sum= sum+a*b;
            a= a+1;
            b= b+2;
        }
        printf(" = %d\n",sum);
    }


//Series--3---using-while-loop--
//2.3.4+4.5.6+6.7.8+......n--
    while(1)
    {
        int n1,n2,n3,sum=0,a=2,b=3,c=4;
        printf("Enter n1 n2 and n3 numbers : ");
        scanf("%d %d %d",&n1,&n2,&n3);
        printf("2.3.4+4.5.6+6.7.8+.......+%d %d %d",n1,n2,n3);
        while(a<=n1 && b<=n2 && c<=n3)
        {
            sum= sum+a*b*c;
            a= a+2;
            b= b+2;
            c= c+2;
        }
        printf(" = %d\n",sum);
    }


//Series---121--
//1 2 3 4 5 6......n--
    while(1)
    {
        int n,i;
        printf("Enter any number : ");
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            printf("%d ",i);
        }
    }


//Series---121--
//1 2 3 4 5 6......n--
    while(1)
    {
        int n,i;
        printf("Enter any number : ");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            printf("%d ",i);
        }
    }


//Series---121--
//2 4 6 8......Even--
    while(1)
    {
        int n,i;
        printf("Enter any number : ");
        scanf("%d",&n);
        for(i=2; i<=n; i=i+2)
        {
            printf("%d ",i);
        }
    }


//Series---123--
//1 2 3 4 5.....sum==
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number : ");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum = %d\n",sum);
    }


//Series---123--
//2 4 6.....sum==
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("2+4+6+.....+%d",n);
        for(i=2; i<=n; i=i+2)
        {
            printf("\n%d",i);
            sum=sum+i;
        }
        printf("\nSum = %d\n",sum);
    }


//Series---123--
//1+3+5.....sum==
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("1+3+5+.....+%d",n);
        for(i=1; i<=n; i=i+2)
        {
            printf("\n%d",i);
            sum=sum+i;
        }
        printf("\nSum = %d\n",sum);
    }


//Series---123--
//1+4+7.....sum==
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("1+4+7+.....+%d",n);
        for(i=1; i<=n; i=i+3)
        {
            printf("\n%d",i);
            sum=sum+i;
        }
        printf("\nSum = %d\n",sum);
    }


//Series---123--
//1.5+2.5+3.5+.....sum==
    while(1)
    {
        float n,i,sum=0;
        printf("Enter any number : ");
        scanf("%f",&n);
        printf("1.5+2.5+3.5+....+%.2f",n);
        for(i=1.5; i<=n; i++)
        {
            printf("\n%.2f",i);
            sum=sum+i;
        }
        printf("\nSum = %.2f\n",sum);
    }


//Series---127--
//1^2+2^2+3^2+.....sum==
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("1^2+2^2+3^2+.....+%d",n);
        for(i=1; i<=n; i++)
        {
            printf("\n%d",i);
            sum=sum+i*i;
        }
        printf("\nSum = %d\n",sum);
    }


//Series---127--
//1^2+2^2+3^2+.....sum==
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any nuber : ");
        scanf("%d",&n);
        for (i=1; i<=n; i++)
        {
            sum=sum+i*i;
        }
        printf("Sum = %d\n",sum);
    }


//Series---123--
//1^2+2^2+3^2+......sum==
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number : ");
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            sum=sum+i*i;
        }
        printf("Sum = %d\n",sum);
    }


//Series---127--
//1^2+3^2+5^2+.....sum==
    while(1)
      {
          int n,i,sum=0;
          printf("Enter any number : ");
          scanf("%d",&n);
          printf("1^2+3^2+5^2+....+%d",n);
          for(i=1; i<=n; i=i+2)
          {
              sum=sum+i*i;
          }
          printf("\nSum = %d\n",sum);
      }


//Series---127--
//1^2+3^2+5^2+.....sum==
    while(1)
    {
        int n,i,sum=0;
        printf("Enter any number :");
        scanf("%d",&n);
        printf("1^2+3^2+5^2+....+%d/n",n);
        for(i=1; i<=n; i=i+2)
        {
            sum=sum+i*i;
        }
        printf("Sum = %d\n",sum);
    }


//Series---129--
//1*2*3*.....sum==
    while(1)
    {
        int n,i,result=1;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("1*2*3*.......*%d\n",n);
        for(i=1; i<=n; i++)
        {
            result=result*i;
        }
        printf("Result = %d\n",result);
    }


//Series---129--
//1*2*3*.....sum==
    while(1)
    {
        int n,i,result=1;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("1*2*3*...*%d\n",n);
        for(i=1; i<=n; i++)
        {
            result=result*i;
        }
        printf("Result = %d\n",result);
    }


//Series---129--
//1*3*5*.....sum==
    while(1)
    {
        int n,i,result=1;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("1*3*5*.....*%d\n",n);
        for(i=1; i<=n; i=i+2)
        {
            result=result*i;
        }
        printf("Result = %d\n",result);
    }


//Series---129--
//2*4*6*.....sum==
    while(1)
    {
        int n,i,result=1;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("2*4*6*.....*%d\n",n);
        for(i=2; i<=n; i=i+2)
        {
            result=result*i;
        }
        printf("Result = %d\n",result);
    }


//Series---131--
//1^2*2^2*3^2*.....sum==
    while(1)
    {
        int n,i,result=1;
        printf("Enter any number :");
        scanf("%d",&n);
        printf("1^2*2^2*3^2*....*%d\n",n);
        for(i=1; i<=n; i++)
        {
            result=result*i*i;
        }
        printf("Result = %d\n",result);
    }


//Series---131--
//1^3*2^3*3^3*.....sum==
    while(1)
    {
        int n,i,result=1;
        printf("Enter any number :");
        scanf("%d",&n);
        printf("1^3*2^3*3^3*......*%d\n",n);
        for(i=1; i<=n; i++)
        {
            result=result*i*i*i;
        }
        printf("Result = %d\n",result);
    }


//Series---131--
//1^3*3^3*5^3*.....sum==
    while(1)
    {
        int n,i,result=1;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("1^3*3^3*5^3*......*%d\n",n);
        for(i=1; i<=n; i=i+2)
        {
            result=result*i*i*i;
        }
        printf("Result = %d\n",result);
    }


//Series---132--
//1+1/2+1/3+1/4+.....n==
    while(1)
    {
        double n,i,sum=0;
        printf("Enter any number : ");
        scanf("%lf",&n);
        for(i=1; i<=n; i++)
        {
            sum=sum+ (1/i);
        }
        printf("Sum = %.2lf\n",sum);
    }


//Series---132--important--
//1+1/2+1/3+1/4+.....n==
    while(1)
    {
        double n,i,sum=0;
        printf("Enter any number : ");
        scanf("%lf",&n);
        for(i=1; i<=n; i++)
        {
            sum=sum+ (1/i);
            if(i==1)
                printf("\n1+");
            else if(i==n)
                printf("(1\%.2lf)",i);
            else
                printf("(1\%.2lf)+",i);

            }
        printf("Sum = %.2lf\n",sum);
    }


//Series---136--Fibonacci-number--
//0 1 1 2 3 5 8 13.....n==
    while(1)
    {
       int frist=0,secound=1,count=0,fibo,n;
       printf("Enter any number : ");
       scanf("%d",&n);
       while(count<n)
       {
            if(count<=1)
            {
                fibo=count;
            }
            else {
                fibo = frist+secound;
                frist= secound;
                secound= fibo;
            }
            printf("%d ",fibo);
            count++;
       }
    }


//Series---136--Fibonacci-number--
//0 1 1 2 3 5 8 13.....n==
    while(1)
    {
        int frist=0, secound=1, count=0, fibo, n;
        printf("Enter Range : ");
        scanf("%d",&n);
        while(count<n)
        {
            if(count<=1)
            {
                fibo= count;
            }
            else
            {
                fibo= frist + secound;
                frist = secound;
                secound = fibo;
            }
            printf("%d \n",fibo);
            count++;
        }

    }


//Series---136--Fibonacci-number--
//0 1 1 2 3 5 8 13.....n==
    while(1)
    {
        int first=0, secound=1, cont=0, fibo, n;
        printf("Enter Range : ");
        scanf("%d",&n);

        while(cont<n)
        {
            if(cont<=1)
            {
                fibo=cont;
            }
            else
            {
                fibo= first+secound;
                first = secound;
                secound = fibo;
            }
            printf("%d \n",fibo);
            cont++;
        }
    }


//Series---136--Fibonacci-number--
//0 1 1 2 3 5 8 13.....n==
    while(1)
    {
        int first=0, secound=1, cont=0 ,fibo, n;
        printf("Enter Range : ");
        scanf("%d",&n);
        while(cont<n)
        {
             if(cont<=1)
             {
                 fibo=  cont;
             }
             else
             {
                 fibo = first+ secound;
                 first = secound;
                 secound = fibo;
             }
             printf("%d \n",fibo);
             cont++;
        }

    }


//Series---136--Fibonacci-number--
//0 1 1 2 3 5 8 13.....n==
    while(1)
    {
        int first=0, secound=1, cont=0, fibo, n;
        printf("Enter Range : ");
        scanf("%d",&n);
        while(cont<n)
        {
            if(cont<=1)
            {
                fibo= cont;
            }
            else
            {
                fibo = first+secound;
                first = secound;
                secound = fibo;
            }
            printf("%d \n",fibo);
            cont++;
        }
    }


//Series---137--Lucas-number--
//1 1 1 3 5 9 17 .....n==
    while(1)
    {
        int a, b, c, d, i, n;
        printf("Enter n = ");
        scanf("%d",&n);
        a=1;
        b=1;
        c=1;
        printf(" %d %d %d ",a,b,c);
        for(i=1; i<=n-3; i++)
        {
            d= a+b+c;
            printf(" %d \n",d);
            a=b;
            b=c;
            c=d;
        }
    }


//Series---137--Lucas-number--
//1 1 1 3 5 9 17 .....n==
    while(1)
    {
        int a,b,c,d,i,n;
        printf("Enter N = ");
        scanf("%d",&n);
        a=1;
        b=1;
        c=1;
        printf(" %d %d %d ",a,b,c);
        for(i=1; i<=n-3; i++)
        {
            d=a+b+c;
            printf(" %d \n",d);
            a=b;
            b=c;
            c=d;
        }

    }


//Series---137--Lucas-number--
//1 1 1 3 5 9 17 .....n==
    while(1)
    {
        int a,b,c,d,i,n;
        printf("Enter N = ");
        scanf("%d",&n);
        a=1;
        b=1;
        c=1;
        printf("%d %d %d ",a,b,c);
        for(i=1; i<=n-3; i++)
        {
            d=a+b+c;
            printf(" %d ",d);
            a=b;
            b=c;
            c=d;

        }
    }
//Series---137--Lucas-number--
//1 1 1 3 5 9 17 .....n==
    while(1)
    {
        int a,b,c,d,i,n;
        printf("Enter N = ");
        scanf("%d",&n);
        a=1;
        b=1;
        c=1;
        printf(" %d %d %d ",a,b,c);
        for(i=1; i<=n-3; i++)
        {
            d=a+b+c;
            printf(" %d ",d);
            a=b;
            b=c;
            c=d;
        }
    }

//----Ending---Siries---Here-------



    getch();
}
