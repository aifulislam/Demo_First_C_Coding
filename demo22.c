//Switch stetment//switch,case,break and defult--
#include<stdio.h>
int main ()
{

    int digit;
    printf("Enter any digit: ");
    scanf("%d",&digit);
    switch (digit)
    {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;
    default:
        printf("Not a valid digit.");
    }


    int digit;
    printf("Enter any digit: ");
    scanf("%d",&digit);
    switch(digit)
    {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;
    default :
        printf("Not a valid digit.");
    }


//Vowel or consonant letter--
    char ch;
     printf("Enter any letter: ");
     scanf("%c",&ch);
     switch(ch)
     {
     case 'a':
         printf("Vowel");
         break;
     case 'e':
         printf("Vowel");
         break;
     case 'i':
         printf("Vowel");
         break;
     case 'o':
         printf("Vowel");
         break;
     case 'u':
         printf("Vowel");
         break;
     case 'A':
         printf("Vowel");
         break;
     case 'E':
         printf("Vowel");
         break;
     case 'I':
         printf("Vowel");
         break;
     case 'O':
         printf("Vowel");
         break;
     case 'U':
         printf("Vowel");
         break;
     default:
         printf("Consonant");

//Vowel or consonant letter--
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel");
        break;
    default :
        printf("Consonant");
    }
//Switch- manu base temperature convertion--
    int choice;
    float temp,converdTemp;
    printf("Temperature convertion manu :\n");
    printf("1. Fahrhenhight to Celcius :\n");
    printf("2. Celcius to Fahrhenhight :\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        {
          printf("Enter the Fahrhenhight Temperature : ");
          scanf("%f",&temp);
          converdTemp = (temp-32)/1.8;
          printf("The Temperature in Celcius is : %f\n",converdTemp);
        }
    break;
    case 2:
        {
          printf("Enter the Celcius Temperature : ");
          scanf("%f",&temp);
          converdTemp = (1.8*temp)+32;
          printf("The Temperature in Fahrhenhight is : %f\n",converdTemp);
        }
    break;
    default :
        printf("Not a correct option.");
    }

//Switch- manu base temperature convertion--
    int choice;
    float temp,converdTemp;
    printf("Temperature Convertion menu : \n");
    printf("1. Fahranite to Celcius : \n");
    printf("2. Celcius to Fahranite : \n");
    printf("Enter your choice : \n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    {
        printf("Enter the Fahrhenhight Temperature : ");
        scanf("%f",&temp);
        converdTemp = (temp-32)/1.8;
        printf("The Temperature in Celcius is : %f\n",converdTemp);
        break;
    }

    case 2:
    {
        printf("Enter the Celcius Temperature : ");
        scanf("%f",&temp);
        converdTemp = (1.8*temp)+32;
        printf("The Temperature in Fahrhenhight is : %f\n",converdTemp);
        break;
    }

    default :
        printf("Not a correct option.");

    }


//--Conditional operator--
//Large number is --
    while(1)
    {
        int  num1,num2,large;
        printf("Enter two numbers : ");
        scanf("%d %d",&num1,&num2);
        large= (num1>num2) ?  num1 : num2;
        printf("Large number is = %d\n",large);
    }

//Small number is --
    while(1)
    {
        int num1,num2,small;
        printf("Enter two numbers : ");
        scanf("%d %d",&num1,&num2);
        small= (num1<num2) ? num1 : num2;
        printf("Small number is : %d\n",small);
    }



    getch();
//return 0;
}
