#include<stdio.h>
int main()
{
//228-File-Introduction to File
    FILE *file;
    file = fopen("test.txt","w");
    if(file==NULL)
    {
        printf("File dosen't exist.");
    }
    else
    {
        printf("File is opened.");
        fclose(file);
    }
//228-File-Introduction to File
    FILE *file1;
    file1 = fopen("test.txt","w");
    if(file1==NULL)
    {
        printf("File1 dosen't exist.");
    }
    else
    {
        printf("File1 is opened.");
        fclose(file1);
    }
//229-File-Writing to a file using fputc()
    FILE  *file;
    char name[20]="Ariful Islam";
    int length = strlen(name);
    int i;
    file = fopen("test.txt","w");
    if(file== NULL)
    {
        printf("File dosen't esist.");
    }
    else
    {
        printf("File is opened.");
        for(i=0; i<strlen; i++)
        {
            fputc(name[i],file);
        }
        printf("File2 is written successfully.");
        fclose(file);
    }


getch();
}
