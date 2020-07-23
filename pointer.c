#include<stdio.h>
int main()
{
//231-Pointer-Introduction to pointer
    int x=5;
    int *ptr;
    ptr = &x;
    printf("Value of x = %d\n",x);
    printf("Address of x = %d\n",&x);
    printf("Value of x = %d\n",ptr);
    printf("Value of x = %d\n",*ptr);
    printf("Address of x = %d\n",&ptr);


//232-Pointer-pointer pointing to different variable
    int x=10, y=20, z=30;
    int *ptr;
    ptr = &x;
    printf("x = %d\n",*ptr);
    ptr = &y;
    printf("y = %d\n",*ptr);
    ptr = &z;
    printf("z = %d\n",*ptr);


//233-Pointer-Adding two numbers using pointe
    int x=10,y=20, sum;
    int *ptr1,*ptr2;
    ptr1= &x;
    ptr2= &y;
    sum= *ptr1 + *ptr2;
    printf("Sum = %d",sum);


//233-Pointer-Adding two numbers using pointe
    int x=10,y=20,sum;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    sum=*ptr1+*ptr2;
    printf("Sum = %d",sum);


//234-Pointer-swapping two numbers
    int x=10,y=20,temp;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    //swapping
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("X = %d\n",x);
    printf("Y = %d",y);


//234-Pointer-swapping two numbers
    int x=10,y=20,temp;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    //swapping
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("X = %d\n",x);
    printf("Y = %d\n",y);


//235-Pointer-swapping two numbers using pointer and function
    int x=10,y=20;
    printf("Before swapping: x = %d, y = %d\n",x,y);
    swapping(&x,&y);
    printf("After swapping: x = %d, y = %d\n",x,y);

    getch();
    }
    void swapping(int *ptr1,int *ptr2)
    {
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    }


//235-Pointer-swapping two numbers using pointer and function
    int x=10,y=20;
    printf("Before swapping: x = %d, y = %d\n",x,y);
    swapping(&x,&y);
    printf("After swapping: x = %d, y = %d\n",x,y);

    getch();
    }
    void swapping(int  *ptr1, int *ptr2)
    {
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    }


//235-Pointer-swapping two numbers using pointer and function
    int x=10,y=20;
    printf("Before swapping: x = %d, y = %d\n",x,y);
    swapping(&x,&y);
    printf("After swapping: x = %d, y = %d\n",x,y);
    getch();
    }
    void swapping(int *ptr1,int *ptr2)
    {
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    }


//235-Pointer-swapping two numbers using pointer and function
    int x=10,y=20;
    printf("Before swapping: x =%d, y = %d\n",x,y);
    swapping(&x,&y);
    printf("After swapping: x =%d, y = %d\n",x,y);

    getch();
    }
    void swapping(int *ptr1,int *ptr2)
    {
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    }


//236-Pointer-Access array elements using pointer
    int a[5]={10,20,30,40,50};
    int *ptr,i;
    ptr= &a[0];
    for(i=0; i<5; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }


//236-Pointer-Access array elements using pointer
    int a[8]={10,20,30,40,50,60,70,80};
    int *ptr,i;
    ptr=&a[0];
    for(i=0; i<8; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }


//236-Pointer-Access array elements using pointer
    int a[8]={10,20,30,40,50,60,70,80};
    int *ptr,i;
    ptr=&a[0];
    for(i=0; i<8; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }


    getch();
}
