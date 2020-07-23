//Unary oparetor--
#include<stdio.h>
int main()
{
    int x=10;
    int result=++x;
    printf("unary number== %d",result);

    int x=10;
    printf("%d\n",x++);
    printf("%d\n",x);
    printf("%d\n",++x);
    printf("%d\n",x);
    printf("%d\n",x--);
    printf("%d\n",--x);

//Relational oparetor--
//even or odd--
    int num;
    printf("enter any number--");
    scanf("%d",&num);
    if (num%2==0)
        printf("Even");
    if (num%2!=0)
        printf("Odd");
    int num;
    printf("Enter any number--");
    scanf("%d",&num);
    if (num%2==0)
        printf("Even");
    if (num%2!=0)
        printf("Odd");
    int num;
    printf("enter num--");
    scanf("%d",&num);
    if (num%2==0)
        printf("even");
    if (num%2!=0)
        printf("odd");
//if ,if else ,else ---
    int time;
    printf("enter time--");
    scanf("%d",&time);
    if (time==12)
    {
        printf("Good morning \n");
        printf("Ariful Islam \n");
    }
    else
    {
        printf("Its not good morning \n");
        printf("Ariful Islam \n");
    }
//Large and small number--
    int num1,num2;
    printf("Enter first number--");
    scanf("%d",&num1);
    printf("Enter second number--");
    scanf("%d",&num2);
    if (num1 > num2)
        printf("num1 is large %d\n",num1);
    else if (num1 < num2)
        printf("num2 is large %d\n",num2);
    else
        printf("Number is Equal");
//Marks counting and greding--
    int marks;
    printf("enter any marks press here--");
    scanf("%d",&marks);
    if (marks >=80)
        printf("A+");
    else if (marks >=70)
        printf("A");
    else if  (marks >=60)
        printf("A-");
    else if (marks >=50)
        printf("B");
    else if  (marks >=40)
        printf("C");
    else if  (marks >=33)
        printf("D");
    else
        printf("Fail");

    int marks;
    printf("Enter mark--");
    scanf("%d",&marks);
    if (marks>=80)
        printf("A+");
    else if (marks>=70)
        printf("A");
    else if (marks>=60)
        printf("A-");
    else if (marks>=50)
        printf("B");
    else if (marks>=40)
        printf("C");
    else if (marks>=33)
        printf("D");
    else
        printf("Fail");
//positive,negative and zero number--
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if (num>0)
        printf("Positive");
    else if (num<0)
        printf("Negative");
    else
        printf("Zero");



     int num;
     printf("Enter any number--");
     scanf("%d",&num);
     if (num>0)
         printf("Positive");
     else if (num<0)
         printf("Negative");
     else
         printf("Zero");
     int num;
     printf("Enter any number__");
     scanf("%d",&num);
     if (num >0)
         printf("Positive");
     else if (num <0)
         printf("Negative");
     else
         printf("Zero");

//vowel or consonant----
    char ch;
    printf("Enter press any letter==  ");
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
    else if (ch=='A')
        printf("vowel");
    else if (ch=='E')
        printf("vowel");
    else if (ch=='I')
        printf("vowel");
    else if (ch=='O')
        printf("vowel");
    else if (ch=='U')
        printf("vowel");
    else
        printf("consonant");

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("Vowel");
    else
        printf("Consonant");


    int num1,num2,num3;
    printf("Ener three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    //Large number is----
    if (num1>num2 && num1>num3)
       printf("Large number is  : %d\n",num1);
    else if (num2>num1 && num2>num3)
       printf("Large number is : %d\n",num2);
    else if (num3>num1 && num3>num2)
       printf("Large number is : %d\n",num3);
    else
       printf("number are Equal");
    //Small number is----
    if (num1<num2 && num1<num3)
       printf(":Small number is  : %d\n",num1);
    else if (num2<num1 && num2<num3)
       printf("Small number is : %d\n",num2);
    else if (num3<num1 && num3<num2)
       printf("Small number is : %d\n",num3);
    else
       printf("number are Equal");
//leap year------
    int year;
    printf("Enter any year==");
    scanf("%d",&year);
    if (year%400==0)
        printf("Leap year");
    else if (year%4==0 && year%100!=0)
        printf("Leap year");
    else
    printf("Not leap year");

    int year;
    printf("Enter press any year___ ");
    scanf("%d",&year);
    if (year%400==0)
        printf("Leap year");
    else if (year%4==0 && year%100!=0)
        printf("Leap year");
    else
        printf("Not leap year");
//How to difine small or capital letter--
    char ch;
    printf("Enter press any letter__ ");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
        printf("Capital letter");
    else if (ch>='a' && ch<='z')
        printf("Small letter");
    else
        printf("Its not Letter");
    char ch;
    printf("Enter presss any letter__");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
        printf("Its Capital letter");
    else if (ch>='a' && ch<='z')
        printf("Its Small letter");
    else
        printf("Its not letter");
//Vowel or consonant----
    char ch;
    printf("Enter any leter__");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            printf("Its Vowel letter");
    else
    printf("Its Consonant letter");
//Pass or Fail Marks --
    int mark;
    printf("Enter any number__");
    scanf("%d",&mark);
    if(mark>=33)
        printf("Pass");
    else
        printf("Fail");
//Grading point marks----
    int mark;
    printf("Enter any number__ ");
    scanf("%d",&mark);
    if (mark>100 || mark<0)
        printf("Invalid mark");
    else if (mark>=80 && mark<=100)
        printf("A+");
    else if (mark>=70 && mark<=79)
        printf("A");
    else if (mark>=60 && mark<=69)
        printf("A-");
    else if (mark>=50 && mark<=59)
        printf("B");
    else if (mark>=40 && mark<=49)
        printf("C");
    else if (mark>=33 && mark<=39)
        printf("D");
    else
        printf("F");

    int mark;
    printf("Enter any number__ ");
    scanf("%d",&mark);
    if (mark>100 || mark<0)
        printf("Invalid mark");
    else if (mark>=80 && mark<=100)
        printf("A+");
    else if (mark>=70 && mark<=79)
        printf("A");
    else if (mark>=60 && mark<=69)
        printf("A-");
    else if (mark>=50 && mark<=59)
        printf("B");
    else if (mark>=40 && mark<=49)
        printf("C");
    else if (mark>=33 && mark<=39)
        printf("D");
    else
        printf("F");

    int mark;
    printf("Enter any number: ");
    scanf("%d",&mark);
    if (mark>100 || mark<0)
        printf("Invalid mark");
    else if (mark>=80 && mark<=100)
        printf("A+");
    else if (mark>=70 && mark<=79)
        printf("A");
    else if (mark>=60 && mark<=69)
        printf("A-");
    else if (mark>=50 && mark<=59)
        printf("B");
    else if (mark>=40 && mark<=49)
        printf("C");
    else if (mark>=33 && mark<=39)
        printf("D");
    else
        printf("F");

    int mark;
    printf("Enter any number:");
    scanf("%d",&mark);
    if (mark>100 || mark<0)
        printf("Invalid mark");
    else if (mark>=80 && mark<=100)
        printf("A+");
    else if (mark>=70 && mark<=79)
        printf("A");
    else if (mark>=60 && mark<=69)
        printf("A-");
    else if (mark>=50 && mark<=59)
        printf("B");
    else if (mark>=40 && mark<=49)
        printf("C");
    else if (mark>=33 && mark<=39)
        printf("D");
    else
        printf("F");


    getch();
//return 0;
}
