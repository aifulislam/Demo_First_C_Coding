#include<stdio.h>
//Global Structure
struct person
{
    int age;
    float salary;
};
    struct person Ariful,Tamim; //Global variable
int main()
{
//218-Structure-Introduction to Structure
//219-Structure-Global vs Local structure
    //Local Structure
    struct person
    {
        int age;
        float salary;
    };


//struct person Ariful,Tamim;//Local variable
Ariful.age = 26;
Ariful.salary = 20000.50;
printf("Ariful : \n");
printf("Age = %d\n",Ariful.age);
printf("Salary = %.2f\n",Ariful.salary);

Tamim.age = 20;
Tamim.salary = 15000.50;
printf("\nTamim : \n");
printf("Age = %d\n",Tamim.age);
printf("Salary = %.2f\n",Tamim.salary);

getch();
}


//220-Structure-Input structure element
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person Ariful,Tamim;//Local variable
    //Ariful
    printf("Enter Information for Ariful: \n");
    printf("Enter Age: \n");
    scanf("%d",&Ariful.age);

    printf("Enter Salary: \n");
    scanf("%f",&Ariful.salary);

    printf("\nAriful : \n");
    printf("Age = %d\n",Ariful.age);
    printf("Salary = %.2f\n",Ariful.salary);

    //Tamim
    printf("\n\nEnter Information for Tamim: \n");
    printf("Enter Age: \n");
    scanf("%d",&Tamim.age);

    printf("Enter Salary: \n");
    scanf("%f",&Tamim.salary);

    printf("\nTamim : \n");
    printf("Age = %d\n",Tamim.age);
    printf("Salary = %.2f\n",Tamim.salary);

getch();
}


//220-Structure-Input structure element
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person Ariful, Tamim;

    printf("Enter Information for Ariful: \n");
    printf("Enter age: ");
    scanf("%d",&Ariful.age);
    printf("Enter Salary: ");
    scanf("%f",&Ariful.salary);
    printf("Age = %d\n",Ariful.age);
    printf("Salary = %.2f\n",Ariful.salary);

    printf("\nEnter Information for Tamim: \n");
    printf("Enter age: ");
    scanf("%d",&Tamim.age);
    printf("Enter Salary: ");
    scanf("%f",&Tamim.salary);
    printf("Age = %d\n",Tamim.age);
    printf("Salary = %.2f\n",Tamim.salary);

    getch();
}


//221-Structure-initialize structure variables
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person Ariful={25,20500.50}; //Local variable
    struct person Tamim,Nazim;
    //Element wise assignment
    Tamim.age=27;
    Tamim.salary=20000.50;
    //structure variable assignment
    Nazim=Tamim;

    printf("Enter Information for Ariful: \n");
    printf("Ariful: ");
    printf("Age = %d\n",Ariful.age);
    printf("Salary = %.2f\n",Ariful.salary);

    printf("\nEnter Information for Tamim: \n");
    printf("Tamim: ");
    printf("Age = %d\n",Tamim.age);
    printf("Salary = %.2f\n",Tamim.salary);

    printf("\nEnter Information for Nazim: \n");
    printf("Nazim: ");
    printf("Age = %d\n",Nazim.age);
    printf("Salary = %.2f\n",Nazim.salary);

    getch();
}


//222-Structure-structure comparison
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person Ariful={25,20000.50};
    struct person Tamim,Nazim;
    Tamim.age = 20;
    Tamim.salary = 25000.75;
    Nazim = Tamim;

    if(Ariful.age==Tamim.age && Ariful.salary==Tamim.salary)
        printf("Ariful equal Tamim");
    else
        printf("Ariful not equal Tamim");

    getch();
}



//222-Structure-structure comparison
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person Ariful={20,20000.50};
    struct person Tamim,Nazim;
    Tamim.age = 25;
    Tamim.salary = 25000.75;
    Nazim = Tamim;
    if(Nazim.age==Tamim.age && Nazim.salary==Tamim.salary)
        printf("Ariful age and salary equal Tamim");
    else
        printf("Ariful age and salary Not equal Tamim");

    getch();
}


//223-Structure-Array of structure
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("Enter information for person : %d\n",i+1);
        printf("Enter age: \n");
        scanf("%d",&person[i].age);
        printf("Enter salary: \n");
        scanf("%f",&person[i].salary);
    }
    for(i=0; i<4; i++)
    {
        printf("\ninformation for person : %d\n",i+1);
        printf("age: %d\n",person[i].age);
        printf("salary: %.2f\n",person[i].salary);
    }

    getch();
}


//223-Structure-Array of structure
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("\nEnter information for person: %d\n",i+1);
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%f",&person[i].salary);
    }
    for(i=0; i<4; i++)
    {
        printf("\nEnter information for person: %d\n",i+1);
        printf("age: %d\n",person[i].age);
        printf("Enter salary: %.2f\n",person[i].salary);
    }


    getch();
}


//224-Structure-Array within structure
struct person
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    struct person person[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("\nEnter information for person: %d\n",i+1);
        printf("Enter Name: ");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%f",&person[i].salary);
    }
    for(i=0; i<4; i++)
    {
        printf("\nInformation for person: %d\n",i+1);
        printf("age: %s\n",person[i].name);
        printf("age: %d\n",person[i].age);
        printf("Enter salary: %.2f\n",person[i].salary);
    }

    getch();
}


//224-Structure-Array within structure
struct person
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    struct person person[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("Enter information for person: %d\n",i+1);
        printf("Enter Name: ");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%f",&person[i].salary);
    }
    for(i=0; i<4; i++)
    {
        printf("\n\nInformation for person: %d\n",i+1);
        printf("Name: %s\n",person[i].name);
        printf("Age: %d\n",person[i].age);
        printf("Salary: %.2f\n",person[i].salary);
    }


    getch();
}


//225-Structure-passing structure variable to function
struct person
{
    char name[50];
    int age;
    float salary;
};
void display(struct person p)
{
    printf("\nName: %s\n",p.name);
    printf("Name: %d\n",p.age);
    printf("Name: %.2f\n",p.salary);
};
int main()
{
    struct person person1,person2,person3;
    strcpy(person1.name,"Ariful Islam");
    person1.age = 27;
    person1.salary = 20000.50;
    display(person1);

    strcpy(person2.name,"Tamim Iqbal");
    person2.age = 20;
    person2.salary = 15000.50;
    display(person2);

    strcpy(person3.name,"Nazim Uddin");
    person3.age = 20;
    person3.salary = 15000.50;
    display(person3);

    getch();
}


//225-Structure-passing structure variable to function
struct person
{
    char name[30];
    int age;
    float salary;
};
void disply(struct person p)
{
    printf("Name: %s\n",p.name);
    printf("Name: %d\n",p.age);
    printf("Name: %.2f\n\n",p.salary);
}
int main()
{
    struct person person1,person2,person3,person4;

    strcpy(person1.name,"Ariful Islam");
    person1.age = 27;
    person1.salary= 20000.50;
    disply(person1);

    strcpy(person2.name,"Tamim Iqbal");
    person2.age = 20;
    person2.salary= 16000.50;
    disply(person2);

    strcpy(person3.name,"Nazim Uddin");
    person3.age = 25;
    person3.salary= 25000.75;
    disply(person3);

    strcpy(person4.name,"Aslam Uddin");
    person4.age = 30;
    person4.salary= 24000.75;
    disply(person4);

    getch();
}
