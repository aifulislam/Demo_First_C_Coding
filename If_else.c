#include<stdio.h>
#include<math.h>
    //int b=20;//Global variable
int main()
{
//unary operator-------------
    int x = 10;
    int result = -x;
    printf("%d\n",result);


//unary operator increement/decrimment-----------
//>, >= , < , <= , ==, !=,
    //int x = 10;
    //int y = x++;
    printf("%d\n",x++);
    printf("%d\n",x);
    printf("%d\n",++x);
    printf("%d\n",x);
    printf("%d\n",x--);
    printf("%d\n",--x);


//5.56 - Relational operator (part-1)----------------
//>, >= , < , <= , ==, !=,
//control statement - conditional control statement , loop control statement
//conditional control statement - if-else , switch.
//Even/Odd----------------
    int num;
    printf("Enter an integer : ");
    scanf("%d",&num);
    if(num%2==0)
        printf("Even");
    if(num%2!=0)
        printf("Odd");

    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("Even");
    else
        printf("Odd");
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Even");
        printf("Arif");
    }
    else
        printf("Odd");


//5.57 - Relational operator (part-2)------------
//Multiple if else statement------------
    int time=20;
    if(time == 10)
    {
        printf("good mornning.\n");
        printf("Ariful Islam");
    }
    else
    {
        printf("Sorry Its not morning.\n");
        printf("Ariful Islam.");
    }


//large/small number---------------
    int num1,num2;
    printf("Enter First number: ");
    scanf("%d",&num1);
    printf("Enter Second number: ");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("Large : %d\n",num1);
    }
    else if(num1<num2)
    {
        printf("Large : %d\n",num2);
    }
    else
    {
        printf("Number are equal.");
    }


//large/small----------------
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    if(num1<num2)
    {
        printf("Small : %d",num1);
    }
    else if(num1>num2)
    {
        printf("Small : %d",num2);
    }
    else printf("Equal");


//5.57 - Relational operator (part-3)-----------------
//marks/gradding
    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);
    if(marks>=80)
        printf("A+");
    else if(marks>=70)
        printf("A");
    else if(marks>=60)
        printf("A-");
    else if(marks>=50)
        printf("B");
    else if(marks>=40)
        printf("C");
    else if(marks>=33)
        printf("D");
    else
        printf("F");


//marks/gradding-------------------
    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);
    if(marks>=80)
        printf("A+");
    else if(marks>=70)
        printf("A");
    else if(marks>=60)
        printf("A-");
    else if(marks>=50)
        printf("B");
    else if(marks>=40)
        printf("C");
    else if(marks>=33)
        printf("D");
    else
        printf("F");


//5.57 - Assignment_Operator---------------
    int a=8;
    a+=2;
    printf("%d\n",a);

    int a=10;
    a-=2;
    printf("%d\n",a);

    int a=5;
    a*=2;
    printf("%d\n",a);

    float a=9;
    a/=2;
    printf("%.2f\n",a);

    int a=9;
    a%=2;
    printf("%d\n",a);


//5.63 - কোন একটি সংখ্যা Positive-Negative--------------
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num>0)
        printf("Positive");
    else if(num<0)
        printf("Negative");
    else
        printf("Zero");


//5.66 - Logical operator----------
//Logical operator OR ||-----------
    char ch;
    printf("Enter a letter: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("Vowel");
    else
        printf("Consonant");


//Logical operator AND &&-----------
    int num1,num2,num3;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
        printf("Large number : %d\n",num1);
    else if(num2>num1 && num2>num3)
        printf("Large number : %d\n",num2);
    else if(num3>num1 && num3>num2)
        printf("Large number : %d\n",num3);
    else
        printf("Number are equal");


//5.70 Leap years-----------
    int year;
    printf("Enter any number: ");
    scanf("%d",&year);
    if(year%400==0)
        printf("Leap year");
    else if(year%4==0 && year%100!=0)
        printf("Leap year");
    else
        printf("Its not Leap year");


//5.72 small or capital letter----------
    char ch;
    printf("Enter any letter : ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("Small");
    else if(ch>='A' && ch<='Z')
        printf("Capital");
    else if(ch>='0' && ch<='9')
        printf("Digit");
    else
        printf("Not a letter");



//5.72 small or capital letter-----------
    char ch;
    printf("Enter any Letter: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("Small");
    else if(ch>='A' && ch<='Z')
        printf("Capital");
    else if(ch>='0' && ch<='9')
        printf("Digit");
    else
        printf("Its not a letter");


//vowel / consonant---------
    char ch;
    printf("Enter a letter: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
       || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("Vowel");
    else
        printf("Consonant");


//5.76 Pass or Fail---------
    float num;
    printf("Enter any number : ");
    scanf("%f",&num);
    if(num>=33)
        printf("Pass");
    else
        printf("Fail");


//5.76 Pass, Fail or grading point-------------
    int mark;
    printf("Enter Mark: ");
    scanf("%d",&mark);
    if(mark>100 || mark<0)
        printf("Invalid mark");
    else if(mark>=80 && mark<=100)
        printf("A+");
    else if(mark>=70 && mark<=79)
        printf("A");
    else if(mark>=60 && mark<=69)
        printf("A-");
    else if(mark>=50 && mark<=59)
        printf("B");
    else if(mark>=40 && mark<=49)
        printf("C");
    else if(mark>=33 && mark<=39)
        printf("D");
    else
        printf("F");


//5.76 Pass, Fail or grading point------------
    int mark;
    printf("Enter mark : ");
    scanf("%d",&mark);
    if(mark>100 || mark<0)
        printf("Invalid mark");
    else if(mark>=80 && mark<=100)
        printf("A+");
    else if(mark>=70 && mark<=79)
        printf("A");
    else if(mark>=60 && mark<=69)
        printf("A-");
    else if(mark>=50 && mark<=59)
        printf("B");
    else if(mark>=40 && mark<=49)
        printf("C");
    else if(mark>=33 && mark<=39)
        printf("D");
    else
        printf("F");


//5.80 Variable-----------
//Local variable-------
    int a=10;//Local variable
    printf("Local variable : %d",a);
//Global variable-----------
    printf("Global variable : %d",b);



    getch();
}
