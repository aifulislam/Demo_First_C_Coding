//test 1--Input and output--
#include<stdio.h>
int main(){

//size of int,float,double and char---
    int i;
    float f;
    double d;
    char c;
    printf("size of int= %d bytes.\n",sizeof(i));
    printf("size of float= %d bytes.\n",sizeof(f));
    printf("size of double= %d bytes.\n",sizeof(d));
    printf("size of char= %d byte.",sizeof(c));
//ASCII value--
    int n;
    printf("enter ascii charecter--");
    scanf("%d",&n);
    printf("ASCII value is== %c\n",n);

//ASCII charecter----
    int n;
    printf("enter ascii value is --");
    scanf("%d",&n);
    printf("ASCII charecter is== %c\n",n);

//ASCII charecter----
    int n;
    printf ("enter any ascii value--");
    scanf("%d",&n);
    printf("ascii charecter is-- %c\n",n);

 //ASCII charecter----
    char ch;
    printf("enter any ascii char-- ");
    scanf("%c",&ch);
    printf("ascii velue is-- %d\n",ch);


//lower to upper case letter--
    char lower;
    printf("enter lower case--");
    scanf("%c",&lower);
    printf("your upper case letter is %c\n",lower-32);


//upper to lower case letter--
    char upper;
    printf("enter press any upper case letter--");
    scanf("%c",&upper);
    printf("your lower case letter is %c\n",upper+32);

//using function--lower to upper case letter--
    char lower,upper;
    printf("enter lower case letter--");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("your upper case letter is-- %c\n",upper);

//using function--upper to lower case letter--
    char lower,upper;
    printf("enter any upper case letter--");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("your lower case letter- %c\n",lower);

//convert decimal to octal number--
    int number;
    printf("enter any decimal number--");
    scanf("%d",&number);
    printf("octal number is--  %o",number);

//convert octal to decimal number--
    int number;
    printf("enter any octal number--");
    scanf("%o",&number);
    printf("decimal number is--  %d",number);

//convert decimal to hexa-decimal/octal/decimal number--
    int number;
    printf("enter any hexa-decimal number--");
    scanf("%x",&number);
    printf("decimal number is--  %o",number);


getch();
//return 0;
}
