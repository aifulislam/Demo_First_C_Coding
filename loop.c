#include<stdio.h>
int main()
{
//5.90Loop--for, while, do while--
//For loop--
    int i;
    for(i=1; i<=20; i++)

       //printf("C program\n");
       printf("%d\n",i);
//While loop--

    int i;
    while(i<=20)
    {
       printf("%d\n",i);
       i++;
    }
//Break and continue stratment--
    int i;
    for (i=1; i<20; i++)
    {
        if(i%3==0)
        continue;
            printf("%d\n",i);
        if(i==10)
            break;
    }


    int i;
    for(i=1; i<20; i++)
    {
        if (i%3==0)
            continue;
        printf("%d\n",i);
        if(i==11)
            break;
    }


    int i;
    for(i=1; i<20; i++)
    {
        if (i%4==0)
            continue;
        printf("%d\n",i);
        if (i==18)
            break;
    }


//goto stretment--
    int i=1;
    arif:
    printf("%d\n",i);
    i++;
    if (i<7)
        goto arif;
    int i=1;
    arif:
    printf("%d\n",i);
    i++;
    if (i<7)
        goto arif;

//Time table---
    while(1)
    {
        int num,i;
        printf("Enter any positive number : \n");
        scanf("%d",&num);
        for(i=1; i<=10; i++)
        {
            printf("%d X %d = %d \n",num,i,num*i);
        }
    }


    while(1)
    {
        int n,i,fact=1;
        printf("Enter any number : ");
        scanf("%d",&n);
        for (i=1; i<=n; i++)
        {
            fact= fact*i;
        }
        printf("%d\n",fact);
    }


    while(1)
    {
        int n,i,fact=1;
        printf("Enter any number : ");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            fact=fact*i;
        }
        printf("%d\n",fact);
    }


//Prime number---
    while(1)
    {
        int num,i,count=0;
        printf("Enter press any number : ");
        scanf("%d",&num);
        for (i=2; i<num; i++)
        {
            if (num%i==0)
            {
                count++;
                break;
            }
        }
        if (count==0)
            printf("Its prime number.\n");
        else
            printf("Its not prime number.\n");
    }


//Prime number---
    while(1)
    {
        int num,i,count=0;
        printf("Enter any number : ");
        scanf("%d",&num);
        for (i=2; i<num; i++)
            if(num%i==0)
        {
            count++;
            break;
        }
        if(count==0)
            printf("Its prime number.\n");
        else
            printf("Its Not prime number.\n");
    }


//Prime number--
    while(1)
    {
        int num,i,count=0;
        printf("Enter any positive number: ");
        scanf("%d",&num);
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("Its Prime number.\n");
        else
            printf("Its Not Prime number.\n");
    }


//Prime number--
    while(1)
    {
        int num,i,count=0;
        printf("Enter press any positive number : ");
        scanf("%d",&num);
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("Its Prime number.\n");
        else
            printf("Its Not Prime number.\n");
    }


//Prime number--
    while(1)
    {
        int num,count=0,i;
        printf("Enter any positive number : ");
        scanf("%d",&num);
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("Its prime number.\n");
        else
            printf("Its not prime number.\n");
    }


//GCD and LCM---
    while(1)
    {
        int num1,num2,n1,n2,rem,gcd,lcm;
        printf("Enter press two positive numbers :");
        scanf("%d %d",&num1,&num2);
        n1=num1;
        n2=num2;
        while(n2!=0)
        {
            rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        gcd=n1;
        lcm=(num1*num2)/gcd;
        printf("GCD = %d\n",gcd);
        printf("LCM = %d\n",lcm);
    }


//GCD and LCM----
    while(1)
    {
        int num1,num2,n1,n2,rem,gcd,lcm;
        printf("Enter two number : ");
        scanf("%d %d",&num1,&num2);
        n1=num1;
        n2=num2;
        while(n2!=0)
        {
            rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        gcd=n1;
        lcm=(num1*num2)/gcd;
        printf("GCD =%d\n",gcd);
        printf("LCM = %d\n",lcm);
    }


//GCD and LCM-----
    while(1)
    {
        int num1,num2,n1,n2,rem,gcd,lcm;
        printf("Enter two numbers : ");
        scanf("%d %d",&num1,&num2);
        n1=num1;
        n2=num2;
        while(n2!=0)
        {
            rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        gcd=n1;
        lcm=(num1*num2)/gcd;
        printf("GCD = %d\n",gcd);
        printf("LCM = %d\n",lcm);
    }


//GCD and LCM---
    while(1)
    {
        int num1,num2,n1,n2,rem,gcd,lcm;
        printf("Enter two numbers: ");
        scanf("%d %d",&num1,&num2);
        n1=num1;
        n2=num2;
        while(n2!=0)
        {
            rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        gcd=n1;
        lcm=(num1*num2)/gcd;
        printf("GCD = %d\n",gcd);
        printf("LCM = %d\n",lcm);
    }


//1---n number--
//1,2,3,4,5....
    while(1)
    {
        int n,i;
        printf("Enter any number : ");
        scanf("%d",&n);
        for (i=1; i<=n; i++)
        {
            printf("%d\n",i);
        }
    }


//1---100--------
//1,2,3,4,5....100
    while(1)
    {
        int n,i;
        printf("Enter any number : ");
        scanf("%d",&n);
        for (i=1; i<100; i++)
        {
            printf("%d\n",i);
        }
    }


//Odd number---
//2,4,6,8,....
    while(1)
    {
        int n,i;
        printf("Enter any number : ");
        scanf("%d",&n);
        for (i=2; i<=n; i=i+2)
        {
            printf("%d\n",i);
        }
    }


//Even number---
//1,3,5,7,....
    while(1)
    {
        int n,i;
        printf("Enter any number : ");
        scanf("%d",&n);
        for (i=1; i<=n; i=i+2)
        {
            printf("%d\n",i);
        }
    }


//sum of Digit---
    while(1)
    {
        int num,temp,r,sum=0;
        printf("Enter any number : ");
        scanf("%d",&num);
        temp= num;
        while(temp!=0)
        {
            r= temp %10;
            sum= sum +r;
            temp= temp /10;
        }
        printf("sum of digit: %d\n",sum);
    }


//sum of digit---
    while(1)
    {
        int num,temp,r,sum=0;
        printf("Enter any number: ");
        scanf("%d",&num);
        temp = num;
        while(temp!=0)
        {
            r= temp % 10;
            sum= sum + r;
            temp= temp / 10;
        }
        printf("Sum of digit: %d\n",sum);
    }


//sum of digit--
    while(1)
    {
        int num,temp,r,sum=0;
        printf("Enter any number: ");
        scanf("%d",&num);
        temp= num;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r;
            temp=temp/10;
        }
        printf("Sum of digit : %d\n",sum);
    }


//sum of digit --
    while(1)
    {
        int num,temp,r,sum=0;
        printf("Enter any number : ");
        scanf("%d",&num);
        temp=num;
        while(temp!=0)
        {
            r= temp% 10;
            sum= sum+ r;
            temp= temp/ 10;
        }
        printf("Sum of digit : %d\n",sum);
    }


//Reverse of numbers--
    while(1)
    {
        int num,temp,r,sum=0;
        printf("Enter any number : ");
        scanf("%d",&num);
        temp=num;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum*10+r;
            temp=temp/10;
        }
        printf("Reverse number : %d\n",sum);
    }


//Reverse of numbers--
    while(1)
    {
        int num,temp,r,sum=0;
        printf("Enter any number : ");
        scanf("%d",&num);
        temp=num;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum*10+r;
            temp=temp/10;
        }
        printf("Reverse number : %d\n",sum);
    }


//Reverse of numbers--
    while(1)
    {
        int num,temp,r,sum=0;
        printf("Enter any number : ");
        scanf("%d",&num);
        temp=num;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum*10+r;
            temp=temp/10;
        }
        printf("Reverse number : %d\n",sum);
    }


    getch();
}
