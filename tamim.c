#include<stdio.h>
int main()
{
//229-File-Writing to a file using fputc()
    FILE *file;
    char name[20] = {"Ariful Islam"};
    int length = strlen(name);
    int i;
    file = fopen("test.txt","w");
    if (file==NULL)
    {
        printf("File does't exist.");
    }
    else
    {
        printf("File is opened.\n");
        for(i=0; i<strlen; i++)
        {
            fputc(name[i],file);
        }
        //printf("File is written successfully.\n");
        fclose(file);
    }


//230-File-Writing to a file using fputs()
    FILE *file;
    char name[30];
    file = fopen("test.txt","w");
    if (file==NULL)
    {
        printf("File does't exist.");
    }
    else
    {
        printf("File is opened.\n");
        printf("Enter your full name : ");
        gets(name);

        fputc(name,file);
        printf("File is written successfully.\n");
        fclose(file);
    }


//231-File-Writing to a file using fprintf()
    FILE *file;
    char name[30];
    int age;
    file = fopen("test.txt","a");
    if (file==NULL)
    {
        printf("File does't exist.");
    }
    else
    {
        printf("File is opened.\n");
        printf("Enter your full name : ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);
        fprintf(file,"Name = %s, Age = %d\n",name,age);
        printf("File is written successfully.\n");
        fclose(file);
    }


//231-File-Writing to a file using fprintf()
    FILE *file;
    char name[30];
    int age;
    file = fopen("test.txt","a");
    if (file==NULL)
    {
        printf("File does't exist.");
    }
    else
    {
        printf("File is opened.\n");
        printf("Enter your full name : ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);
        fprintf(file,"Name = %s, Age = %d\n",name,age);
        printf("File is written successfully.\n");
        fclose(file);
    }


//231-File-Writing to a file using fprintf()
    FILE *file;
    char name[30];
    file = fopen("test.txt","w");
    if (file==NULL)
    {
        printf("File does't exist.");
    }
    else
    {
        printf("File is opened.\n");
        printf("Enter your full name : ");
        gets(name);

        fputc(name,file);
        printf("File is written successfully.\n");
        fclose(file);
    }

//232 - File - Reading a file using fgetc()
    FILE *file;
    char ch;
    file = fopen("test.txt","r");
    if(file==NULL)
    {
        printf("File dosn't exist.\n");
    }
    else
    {
        printf("File is opened.\n");
        char ch=fgetc(file);
        while(!feof(file))
        {
            ch= fgetc(file);
            printf("%c",ch);
        }

        fclose(file);
    }



getch();
}
