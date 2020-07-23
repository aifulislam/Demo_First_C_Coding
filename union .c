#include<stdio.h>
//226-union-Introduction to union
union test
{
    int x,y;
};
int main()
{
    union test  t1;
    t1.x=10;

    printf("t1.x = %d\n",t1.x);
    printf("t1.y = %d\n",t1.y);
    t1.y=20;
    printf("t2.x = %d\n",t1.x);
    printf("t2.y = %d\n",t1.y);

    getch();
}


//226-union-Introduction to union
union test
{
    int x,y;
};
int main()
{
    union test t1;
    t1.x = 10;
    printf("t1.x = %d\n",t1.x);
    printf("t1.y = %d\n",t1.y);

    t1.y = 20;
    printf("t1.x = %d\n",t1.x);
    printf("t1.y = %d\n",t1.y);

    getch();
}


//227-union-size of union and structure
union test1
{
    int x,y;
};
union test2
{
    char ch;
    int x;
};
union test3
{
    char name[20];
    double d;
};
struct test4
{
    int x;
    float y;
    char name[20];
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("Sizeof(t1) = %d\n",sizeof(t1));
    printf("Sizeof(t2) = %d\n",sizeof(t2));
    printf("Sizeof(t3) = %d\n",sizeof(t3));
    printf("Sizeof(t4) = %d\n",sizeof(t4));

    getch();
}


//228-enumeration-Introduction to enum
enum days_of_week
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
};
int main()
{
    enum days_of_week day1,day2;
    day1 = Tue;
    day2 = Fri;
    int dif= day2 - day1;
    printf("Day1 = %d\n",day1);
    printf("Day1 = %d\n",day2);
    printf("Defference = %d\n",dif);


    getch();
}


//228-enumeration-Introduction to enum
enum days_of_week
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
};
int main()
{
    enum days_of_week day1,day2;
    day1 = Tue;
    day2 = Sat;
    int dif;
    dif = day2 - day1;
    printf("Day1 = %d\n",day1);
    printf("Day2 = %d\n",day2);
    printf("Defference  = %d\n",dif);

    getch();
}


//229-typedef-Introduction to typedef
int main()
{
    typedef char Arif;
    Arif ch1;
    ch1 = 'A';
    printf("ch1 = %c\n",ch1);

    Arif ch2;
    ch2 = 'B';
    printf("ch2 = %c\n",ch2);

    getch();
}


//229-typedef-Introduction to typedef
struct book
{
    char name[20];
    int price;
};
int main()
{
    typedef struct book my_book;
    my_book b = {"Jebon Kotha",200};

    printf("Book name = %s\n",b.name);
    printf("Book price = %d\n",b.price);


    getch();
}


//229-typedef-Introduction to typedef
struct book
{
    char author[30];
    char name[30];
    int price;
    int page;
    int publish ;
};

int main()
{
    typedef struct book my_book;
    my_book b = {"Ariful Islam","Jebon Kotha",200,100,2020};
    printf("Book author = %s\n",b.author);
    printf("Book name = %s\n",b.name);
    printf("Book price = %d\n",b.price);
    printf("Book page = %d\n",b.page);
    printf("publish  = %d\n",b.publish );

    getch();
}
