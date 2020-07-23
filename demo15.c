//Convert Lower To Uppercase letter whith fuction--
#include<stdio.h>
int main()
{

    char lower,upper;
    printf("enter any lower case--");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("this is upper case letter %c",upper);

    char lower,upper;
    printf("enter lower case letter---");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("this is upper case letter-- %c",upper);
//Convert Uppercase To Lower case letter whith fuction--
    char lower,upper;
    printf("enter upper case letter--");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("this is lower case letter-- %c",lower);
    char lower,upper;
    printf("enter any uppper case--");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("this is lower case-- %c",lower);

    getch();
}
