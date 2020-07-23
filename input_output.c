#include<stdio.h>
int main()
{
//Input_output----------------------------
//5.15 - scanf() এর আরও কিছু ব্যাবহার-------------
    int num1,num2;
    printf("Enter frist number: \n");
    scanf("%d",&num1);
    printf("Enter secound number: \n");
    scanf("%d",&num2);
    printf("Numbers are : %d %d\n",num1,num2);


//5.15 - scanf() এর আরও কিছু ব্যাবহার
    float num1,num2;
    printf("Enter frist number: \n");
    scanf("%f %f",&num1,&num2);
    printf("Numbers are : %.2f %.2f\n",num1,num2);


//5.16 - Find the Size of int, float, double and char data type--------
    int i;
    float f;
    double d;
    char c;
    printf("size of int %d bytes.\n",sizeof(i));
    printf("Size of float %d bytes.\n",sizeof(f));
    printf("Size of double %d bytes.\n",sizeof(d));
    printf("Size of char %d byte.\n",sizeof(c));


//5.17 - Convert ASCII value into character-----------
    int n;
    printf("Enter any ASCII value: \n");
    scanf("%d",&n);
    printf("The ASCII character is : %c",n);


//5.18 - Convert Character Into Ascii Value-------------
    char ch;
    printf("Enter any ASCII character : \n");
    scanf("%c",&ch);
    printf("The ASCII value is: %d\n",ch);


//5.18 - Convert Character Into Ascii Value------------
    char ch;
    printf("Enter any ASCII character : \n");
    scanf("%c",&ch);
    printf("The ASCII value is : %d\n",ch);


//5.19 - Lower To Uppercase letter-------
    char lower;
    printf("Enter any lowercase : \n");
    scanf("%c",&lower);
    printf("The Uppercase is : %c",lower-32);


//5.20 - Upper To lowercase letter------------
    char upper;
    printf("Enter uppercase: \n");
    scanf("%c",&upper);
    printf("The lowercase is : %c",upper+32);


//5.21 - Lower to uppercase letter using library function--------
    char lower,upper;
    printf("Enter lower case : \n");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("The uppercase is %c",upper);
    char lower,upper;
    printf("Enter lower case: \n");
    scanf("%c",&lower);
    upper= toupper(lower);
    printf("The upper case is : %c",upper);


//5.21 - Lower to uppercase letter using library function---
    char lower,upper;
    printf("Enter any upper case: \n");
    scanf("%c",&upper);
    lower= tolower(upper);
    printf("The lowercase is : %c",lower);
    char lower,upper;
    printf("Enter upper case : \n");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("The lower case is: %c",lower);


//5.23 - Conversion between decimal-Octal number-----
    int number;
    printf("Enter any Decimal number: \n");
    scanf("%d",&number);
    printf("The octal number is: %o",number);
    int num;
    printf("Dacimal: \n");
    scanf("%d",&num);
    printf("Octal: %o",num);


//5.24 - Conversion between decimal-hexadecimal number-------
    int num;
    printf("Decimal : \n");
    scanf("%d",&num);
    printf("Hexadecimal : %x",num);
    int num;
    printf("Decimal: \n");
    scanf("%d",&num);
    printf("Hexadecimal : %x",num);
    int num;
    printf("Hexa-Decimal: \n");
    scanf("%x",&num);
    printf("Hexadecimal : %d",num);


//5.25 - Conversion between Octal-Hexadecimal number----------
    int num;
    printf("Octal : ");
    scanf("%o",&num);
    printf("Hexadecimal : %x",num);

    int num;
    printf("Hexadecimal : ");
    scanf("%x",&num);
    printf("Octal : %o",num);


    getch();
}
