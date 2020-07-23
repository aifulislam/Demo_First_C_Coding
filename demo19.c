#include<stdio.h>
int main()
{
//even or odd--
    int num;
    printf("enter any number--");
    scanf("%d",&num);
    if(num%2==0)
        printf("Even");
    else
    printf("Odd");

//even or odd--
    int num;
    printf("enter any number--");
    scanf("%d",&num);
    if(num%2==0)
        printf("Even");
    else
        printf("Odd");

//even or odd--
    int num;
    printf("enter any number--");
    scanf("%d",&num);
    if(num%2==0)
        printf("Even");
    else
        printf("Odd");

//even or odd--
    int num;
    printf("enter any number--");
    scanf("%d",&num);
    if(num%2==0)
       printf("Even");
    else
        printf("Odd");

//positive or negative---
    int num;
    printf("enter num = ");
    scanf("%d",&num);

    if (num>0)
        printf("Positive");
    else if (num<0)
        printf("Negative");
    else
        printf("Zero");

    int num;
    printf("enter number = ");
    scanf("%d",&num);

    if (num>0)
        printf("Positive");
    else if (num<0)
        printf("Negative");
    else
        printf("Zero");

    int num;
    printf("Enter any number = ");
    scanf("%d",&num);

    if (num>0)
        printf("Positive");
    else if (num<0)
        printf("Negative");
    else
        printf("Zero");

//Large or Small---
    int num1,num2;
    printf("Enter two number = ");
    scanf("%d %d",&num1,&num2);
    if (num1>num2)
        printf("Large is = %d",num1);
    else if (num1<num2)
        printf("Large is = %d",num2);
    else
        printf("Equal");

    int num1,num2;
    printf("Enter two numbers = ");
    scanf("%d %d",&num1,&num2);
    if (num1>num2)
        printf("Large is = %d",num1);
    else if (num1<num2)
        printf("Large is = %d",num2);
     else
        printf("Equal");

//vowel or consonant--
    char ch;
    printf("Enter any letter = ");
    scanf("%c",&ch);
    if (ch=='a')
       printf("vowel");
    else if (ch=='e')
       printf("vowel");
    else if (ch=='i')
       printf("vowel");
    else if (ch=='o')
       printf("vowel");
    else if (ch=='u')
       printf("vowel");
    else
       printf("consonant");
    //Logical operator--
    if (ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u')
       printf("vowel");
    else
       printf("consonant");
//Logical operator--
    char ch;
    printf("Enter any letter = ");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("Vowel");
    else
        printf("Consonant");
//Logical operator-- ||
    char ch;
    printf("enter any letter--");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch== 'o' || ch=='u' )
        printf("Vowel");
    else
        printf("Consonant");
//Logical operator-- &&

    int num1,num2,num3;
    printf("enter 3 numbers--");
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>num2 && num1>num3)
        printf("Large number is-- %d\n",num1);
    else if (num2>num1 && num2>num3)
        printf("Large number is-- %d\n",num2);
    else if (num3>num1 && num3>num2)
        printf("Large number is-- %d\n",num3);
    else
        printf("Large number are Equal");
//Leap year---
    int year;
    printf("Enter any year--");
    scanf("%d",&year);
    if (year%400==0)
        printf("Leap year--");
    else if (year%4==0 && year%100!=0)
        printf("Leap year--");
    else
        printf("Not Leap year--");

    int year;
    printf("Enter any year--");
    scanf("%d",&year);
    if (year%400==0)
        printf("Leap year");
    else if (year%4==0 && year%100!=0)
        printf("Leap year");
    else
        printf("Not Leap year");

    int year;
    printf("Enter any year--");
    scanf("%d",&year);
    if (year%400==0)
        printf("Leap year");
    else if (year%4==0 && year%100!=0)
    printf("Leap year");
    else
        printf("Not leap year");


    getch();
}
