#include<stdio.h>
int main()
{
//String - Introduction to String
    char s1[5];
    s1[0]='A';
    s1[1]='R';
    s1[2]='I';
    s1[3]='F';
    s1[4]='\0';
    printf("s1 = %s\n",s1);


    char s1[5]={'A','R','I','F','\0'};
    char s1[]="Ariful Islam\
    Arif"; //[13]
    printf("s1 = %s\n",s1);


//String - Introduction to String
    char s1[5]={'A','R','I','F','\0'};
    s1[0]='A';
    s1[1]='R';
    s1[2]='I';
    s1[3]='F';
    s1[4]='\0';
    char s1[]="Ariful Islam\
    Arif";
    printf("s1 = %s\n",s1);

//String - Input and display String
    char s1[30];
    printf("Enter your full name : ");
    //scanf("%s",&s1);
    gets(s1);
    printf("Your Full Name is:  = %s\n",s1);


//String - Input and display String
    char s1[30];
    printf("Enter your Full Name: ");
    //scanf("%s",&s1);
    gets(s1);
    printf("Your Full name is: %s\n",s1);


//String - Display string character-wise
    char s1[]="Ariful";
    int i=0;
    while(s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }


//String-Display string character-wise
    char s1[]="Ariful";
    int i=0;
    while(s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }


//String-finding length of String using strlen() function
    char s1[]="Ariful Islam";//12 letter
    int len = strlen(s1);
    printf("Length = %d\n",len);

//String-finding length of String using strlen() function
    char s1[]= "Ariful";
    int len = strlen(s1);
    printf("Length = %d\n",len);

//String-finding length of String using strlen() function
    char s1[]= "Ariful";
    int len=strlen(s1);
    printf("Length = %d\n",len);

//String-finding length of String using strlen() function
    char s1[]="Ariful";
    int len=strlen(s1);
    printf("Lenght = %d\n",len);

// String - finding length of String without strlen() function
    char s1[]="Ariful Islam";
    int i=0, len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Lenght = %d\n",len);


// String - finding length of String without strlen() function
    char s1[]="Ariful Islam";
    int i=0,len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length = %d\n",len);

//String - copy string using strcpy()
    char source[]="Ariful Islam";
    char target[20];
    strcpy(target,source);
    printf("Source = %s\n",source);
    printf("Target = %s\n",target);

//String - copy string using strcpy()
    char source[]="Ariful Islam";
    char target[20];
    strcpy(target,source);
    printf("Source = %s\n",source);
    printf("Target = %s\n",target);

//String - copy string using strcpy()
    char source[20]="Ariful Islam";
    char target[20];
    strcpy(target,source);
    printf("Source = %s\n",source);
    printf("Target = %s\n",target);

//String - copy string using strcpy()
    char source[30]="Ariful Isllam";
    char target[30];
    strcpy(target,source);
    printf("Source = %s\n",source);
    printf("Target = %s\n",target);

//String - concatenation using strcat()
    char s1[]="Ariful ";
    char s2[]="Islam";
    strcat(s1,s2);
    printf("s1 = %s\n",s1);

//String - concatenation using strcat()
    char s1[]="Ariful ";
    //char s2[]="Islam";
    strcat(s1,"Islam");
    printf("s1 = %s\n",s1);

//String - concatenation using strcat()
    char str1[]="My name is ";
    char str2[]="Ariful Islam";
    strcat(str1,str2);
    printf("str1 = %s\n",str1);

//String - concatenation using strcat()
    char str1[30]="Our country is ";
    char str2[30]="Bangladesh";
    strcat(str1,str2);
    printf("str1 = %s\n",str1);

//String - concatenation without strcat()
    char s1[50]="Ariful ";
    char s2[]="Islam";
    int i=0, len=0, j=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }

//187--String - concatenation without strcat()
    char str1[50]="My name name is ";
    char str2[50]="Ariful Islam";
    int i=0, len=0, j=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    printf("str1 = %s\n",str1);

//187--String - concatenation without strcat()
    char str1[50]="Our Country is ";
    char str2[50]="Banglades.";
    int i=0,j=0,len=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    printf("str1 = %s\n",str1);

//String - concatenation without strcat()
    char str1[50]="My name is :";
    char str2[]="Ariful Islam";
    int i=0, j=0,len=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }

//String-concatenation without strcat()
    char s1[50]="Our country is: ";
    char s2[]="Bngladesh.";
    int i=0, j=0, len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }


//String-String compare using strcmp()
    char s1[]="Ariful Islam";
    char s2[]="Ariful";
    int d= strcmp(s1,s2);
    if(d==0)
    {
        printf("Its equal.");
    }
    else
        printf("Its not equal.");

//188-String-String compare using strcmp()
    char str1[50]="Ariful Islam";
    char str2[50]="Ariful Islam";
    int d=strcmp(str1,str2);
    if(d==0)
        printf("Its equal.");
    else
        printf("Its not equal.");

//188-String-String compare using strcmp()
    char s1[]="Ariful Islam";
    char s2[]="Ariful";
    int d=strcmp(s1,s2);
    if(d==0)
    {
        printf("Its Equal.");
    }
    else
        printf("Its not Equal.");

//189-String-String reverse using strrev()
    char s1[]="Ariful Islam";
    printf("s1 = %s\n",s1);
    strrev(s1);
    printf("s1 = %s\n",s1);
//189-String-String reverse using strrev()
    char s1[]="Ariful Islam";
    printf("s1 = %s\n",s1);
    strrev(s1);
    printf("s1 = %s1\n",s1);

//189-String-String reverse using strrev()
    char s1[50]="Ariful Islam";
    printf("s1 = %s\n",s1);
    strrev(s1);
    printf("s1 = %s\n",s1);

//190 - String - String reverse without strrev()
    char s1[30]="Ariful Islam";
    char s2[30];
    int i=0,len=0,j;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';

    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);


//190 - String - String reverse without strrev()
    char str1[50]="Ariful Islam";
    char str2[50];
    int i=0, j=0, len=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        str2[j] = str1[i];
    }
    str2[j]='\0';
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);


//190 - String - String reverse without strrev()
    char str1[50]="Ariful Islam";
    char str2[50];
    int i=0, j=0, len=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);


    for(j=0,i=len-1; i>=0; i--, j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    for(j=0, i=len-1; i>=0; i--, j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);


//190 - String - String reverse without strrev()
    char str1[50]="Ariful Islam";
    char str2[50];
    int i=0, j=0, len=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);


//191 - String - string palindrome
    char s1[30]="Ariful Islam";//madam
    char s2[30];
    int i=0,len=0,j;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';

    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);
     //string palindrome
     int d=strcmp(s1,s2);
     if(d==0)
     printf("Its palindrome.");
     else
        printf("Its not palindrome.");

    //string palindrome
    int d=strcmp(s1,s2);
    if(d==0)
        printf("Its palindrome.");
    else
        printf("Its not palindrome.");
    //string palindrome
    int d = strcmp(s1,s2);
    if(d==0)
    {
        printf("Its palindrome.");
    }
    else
    {
        printf("Its not palindrome.");
    }


//192 - String - string swapping
    char swp1[15]="Bangladesh";
    char swp2[15]="Canada";
    char temp[15];
    printf("Before swaping: \n");
    printf("Swp1 = %s\n",swp1);
    printf("Swp1 = %s\n",swp2);
    strcpy(temp,swp1);
    strcpy(swp1,swp2);
    strcpy(swp2,temp);
    printf("\n\nAfter swaping: \n");
    printf("Swp1 = %s\n",swp1);
    printf("Swp1 = %s\n",swp2);


//192 - String - string swapping
    char s1[50]="Bangladesh";
    char s2[50]="Canada";
    char temp[50];
    printf("Before swapping : \n");
    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
    printf("\nAfter swapping : \n");
    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);


//192 - String - string swapping
    char s1[30]="Bangladesh";
    char s2[30]="USA";
    char temp[30];
    printf("Before swapping: \n");
    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
    printf("\nAfter swapping: \n");
    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);


//193 - String - strupr() and strlwr()
//strupr()----
    char str1[]="ariful islam";
    strupr(str1);
    printf("Upper Case = %s\n",str1);

//193 - String - strupr() and strlwr()
//strupr()----
    char s1[40]="ariful islam";
    strupr(s1);
    printf("s1 = %s\n",s1);

//strlwr()----
    char str1[]="ARIUL ISLAM";
    strlwr(str1);
    printf("Lower case = %s\n",str1);

//strlwr()----
    char s1[40]="ARIFUL ISLAM";
    strlwr(s1);
    printf("s1 = %s\n",s1);

//194-String-Number of vowels, consonants, words, digits and other
    char str[100],ch;
    int i,vowel,consonant,word,digit,other;
    i=vowel=consonant=word=digit=other=0;
    printf("Enter a string: ");
    gets(str);
    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            vowel++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
            consonant++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            word++;
        else
            other++;

        i++;
    }
    word++;
    printf("Numbers of vowels = %d\n",vowel);
    printf("Numbers of consonants = %d\n",consonant);
    printf("Numbers of digits = %d\n",digit);
    printf("Numbers of words = %d\n",word);
    printf("Numbers of other = %d\n",other);


//194-String-Number of vowels, consonants, words, digits and other
    char str[100],ch;
    int i,vowel,consonant,word,digit,other;
    i=vowel=consonant=word=digit=other=0;
    printf("Enter a string: ");
    gets(str);
    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            vowel++;
        else if((ch>='a' && ch<='z' )|| (ch>='A' && ch<='Z'))
            consonant++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            word++;
        else
            other++;


        i++;
    }
    word++;
    printf("Numbers of vowels = %d\n",vowel);
    printf("Numbers of consonants = %d\n",consonant);
    printf("Numbers of digits = %d\n",digit);
    printf("Numbers of words = %d\n",word);
    printf("Numbers of others = %d\n",other);


//194-String-Number of vowels, consonants, words, digits and other
    char str[100],ch;
    int i,vowel,consonant,word,digit,other;
    i=vowel=consonant=word=digit=other=0;
    printf("Enter a string: ");
    gets(str);
    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            vowel++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            consonant++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            word++;
        else
            other++;

        i++;
    }
    word++;
    printf("Nombers of vowels = %d\n",vowel);
    printf("Nombers of consonants = %d\n",consonant);
    printf("Nombers of digits = %d\n",digit);
    printf("Nombers of words = %d\n",word);
    printf("Nombers of others = %d\n",other);


//194-String-Number of vowels, consonants, words, digits and other
    char str[100],ch;
    int i,vowel,consonant,word,digit,other;
    i=vowel=consonant=word=digit=other=0;
    printf("Enter a string: ");
    gets(str);
    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
            vowel++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            consonant++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            word++;
        else
            other++;


        i++;
    }
    word++;
    printf("Numbers of vowels = %d\n",vowel);
    printf("Numbers of consonants = %d\n",consonant);
    printf("Numbers of digits = %d\n",digit);
    printf("Numbers of words = %d\n",word);
    printf("Numbers of others = %d\n",other);


//195-String-Number of capital-small letters, digits
    char str[500],ch;
    int i,capital,small,digit;
    i=capital=small=digit=0;
    printf("Enter a string: ");
    gets(str);
    while((ch=str[i])!='\0')
    {
        if(ch>=65 && ch<=90)
            capital++;
        else if(ch>=97 && ch<=122)
            small++;
        else if(ch>=48 && ch<=57)
            digit++;

        i++;
    }
    printf("Numbers of capital letter = %d\n",capital);
    printf("Numbers of small letter = %d\n",small);
    printf("Numbers of digit = %d\n",digit);


    getch();
}
