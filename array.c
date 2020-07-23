//Array Defination
//Array Declare
//Array Initialize
//Datatype array_name [array_size];
#include<stdio.h>
int main()
{
//Introduction to Array--
    int num[5] = {10,20,30,40,50};
    printf("%d\n",num[0]);
    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    num[3] = 40;
    num[4] = 50;

    int sum= num[0] + num[1] + num[2] + num[3] + num[4];
    printf("%d\n",sum);
//Array - Declaration, Initialization , sum of Array
//Array - Sum and Average of an Array--
    int a[5],sum=0,i;
    a[0]= 10;
    a[1]= 20;
    a[2]= 30;
    a[3]= 40;
    a[4]= 50;
    for (i=0; i<5; i++)
    {
        sum=sum+ a[i];
    }
    printf("%d\n",sum);
    printf("%d\n",sum/5);
//Array - Sum and Average of an Array--
    int a[5],sum=0,i;
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;
    for(i=0; i<5; i++)
    {
        sum=sum + a[i];
    }
    printf("Sum = %d\n",sum);
    printf("Average = %d\n",sum/5);

//Array - Sum and Average of an Array--
    int a[5],i,sum=0;
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;

    for(i=0; i<5; i++)
    {
        sum=sum+ a[i];
    }
    printf("Sum = %d\n",sum);
    printf("Avarege = %d\n",sum/5);
//Array - Sum and Average of an Array--
    int a[100],i,n,sum=0;
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;
    printf("How many numbers: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+ a[i];
    }
    printf("Sum = %d\n",sum);
    printf("Avg = %.2f\n",(float)sum/n);
//Array - Sum and Average of an Array--
    int a[100],sum=0,i,n;

    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+ a[i];
    }
    printf("Sum = %d\n",sum);
    printf("Avg = %.2f\n",(float)sum/4);
//Array- Minimum of Array
    int num[100],n,i;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    int max = num[0];
    for(i=1; i<n; i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("Maximum = %d\n",max);
//Array- Maximum of Array
    int num[100],n,i;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    int max = num[0];
    for(i=1; i<n; i++)
    {
        if(max < num[i])
            max = num[i];
    }
    printf("Maximum = %d\n",max);
//Array-Minimum of Array
    int num[100],n,i;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    int min = num[0];
    for(i=1; i<n; i++)
    {
        if(min > num[i])
            min = num[i];
    }
    printf("Minimum = %d\n",min);
//Array- Maximum of Array
    int num[100],n,i;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    int max = num[0];
    for(i=1; i<n; i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("Maximum number: %d\n",max);
//Array-Minimum of Array
    int num[100],n,i;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    int min = num[0];
    for(i=1; i<n; i++)
    {
        if(min>num[i])
            min=num[i];
    }
    printf("Minimum number = %d\n",min);
//Array - Fibonacci series using array
    int a[30],n,i;
    printf("How many numbers: ");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2; i<n; i++)
    {
        a[i]=a[i-1]+ a[i-2];
    }
    //printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
//Array-Fibonacci series using array
    int a[30],n,i;
    printf("How many numbers : ");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2; i<n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
//Array-Fibonacci series using array
    int a[30],n,i;
    printf("How many numbers : ");
    scanf("%d",&n);
    a[0]= 0;
    a[1]= 1;
    for(i=2; i<n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
//Array-Fibonacci series using array
    int a[30],n,i;
    printf("How many numbers : ");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2; i<n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
//Array - Searching a number (Linear search)--
    int num[]= {10,2,15,20,35,46,85};
    int value,i,pos=-1;
    printf("Enter the value you want to search : ");
    scanf("%d",&value);
    for(i=0; i<7; i++)
    {
        if(value==num[i])
        {
            pos = i+1;
            break;
        }

    }
    if(pos==-1)
    {
        printf("Item not found");
    }
    else
    {
        printf("The value is found at possition %d.",pos);
    }
//Array - Searching a number (Linear search)--
    int num[]= {10,2,5,65,35,46,38};
    int value,i,pos=-1;
    printf("Enter the value you want to search : ");
    scanf("%d",&value);
    for(i=0; i<7; i++)
    {
        if(value==num[i])
        {
            pos= i+1;
            break;
        }

    }
    if(pos==-1)
    {
        printf("Item not found.");
    }
    else
    {
        printf("The value is found at posittion %d.",pos);
    }
//Array - Searching a number (Linear search)--
    int num[]= {10,2,5,35,53,52,22,43,33,38};
    int value,i,pos=-1;
    printf("Enter the value you want to search : ");
    scanf("%d",&value);
    for(i=0; i<10; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Item not found.");
    }
    else
    {
        printf("The value is found at possition %d.",pos);
    }
//Array - Searching a number (Linear search)--
    int num[]={10,2,3,65,47,34,9,53,37,45};
    int value,i,pos=-1;
    printf("Enter the value you want to search : ");
    scanf("%d",&value);
    for(i=0; i<10; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Item is not found.");
    }
    else
    {
        printf("The value is found at possition %d.");
    }
//Array - Searching a number (Linear search)--
    int num[]= {10,21,43,54,24,86,35};
    int value,i,pos=-1;
    printf("Enter the value you want to search : ");
    scanf("%d",&value);
    for(i=0; i<7; i++)
    {
        if(value==num[i])
        {
            pos= i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Item not found.");
    }
    else
    {
        printf("The value is found at possition %d.",pos);
    }
//Array - Searching a number (Linear search)--
    int num[]= {10,20,30,40,50,60,70,80,90,100};
    int value,i,pos=0;
    printf("Enter the value you want to search : ");
    scanf("%d",&value);
    for(i=0; i<10; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
        printf("Item is not found. ");
    else
        printf("Enter The value is found at possition : %d",pos);
//Array - copy all elements of an array to another array
    int array1[5]={10,20,30,40,50},array2[5],i;
    printf("array1 : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array1[i]);
    }
    for(i=0; i<5; i++)
    {
        array2[i]=array1[i];
    }
    printf("\nArray2 : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array2[i]);
    }

//Array-- copy all elements of an array to another array
    int array1[5]={10,20,30,40,50},array2[5],i;

    printf("array1 : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array1[i]);
    }
    for(i=0; i<5; i++)
    {
        array2[i]=array1[i];
    }
    printf("\nArray2 : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array2[i]);
    }
//Array-- copy all elements of an array to another array
    int array1[5]= {10,20,30,40,50},array2[5],i;

    printf("Array1: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array1[i]);
    }

    for(i=0; i<5; i++)
    {
        array2[i]=array1[i];
    }

    printf("\nArray2: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array2[i]);
    }
//Array-- copy all elements of an array to another array
    int array1[8]= {5,10,15,20,25,30,35,40},array2[8],i;
    printf("Array1: ");
    for(i=0; i<8; i++)
    {
        printf("%d ",array1[i]);
    }

    printf("\nArray2: ");
    for(i=0; i<8; i++)
    {
        array2[i]=array1[i];
    }
    for(i=0; i<8; i++)
    {
        printf("%d ",array2[i]);
    }
//Array -Scan--copy all elements of an array to another array
    int array1[30],n,array2[30],i;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("array1 : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }
    for(i=0; i<n; i++)
    {
        array2[i]=array1[i];
    }
    printf("\nArray2 : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",array2[i]);
    }
//Array--Scan--copy all elements of an array to another array
    int array1[30],n,array2[30],i;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Array1: ");
    for(i=0;i<n; i++)
    {
        printf("%d ",array1[i]);
    }

    for(i=0; i<n; i++)
    {
        array2[i]=array1[i];
    }
    printf("\nArray2: ");

    for(i=0; i<n; i++)
    {
        printf("%d ",array2[i]);
    }
//Array -Scan--copy all elements of an array to another array
    int array1[30],n,array2[30],i;
    printf("Ho many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Array1: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }
    for(i=0; i<n; i++)
    {
        array2[i]=array1[i];
    }
    printf("\nArray2: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",array2[i]);
    }
// Array - Introduction to 2D Array
    int i,j;
    int A[3][4]={ {5,6,7,8},{9,10,11,12},{13,14,15,16} };
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//Array - Introduction to 2D Array
    int i,j;
    int A[3][4]={ {5,6,7,8},{9,10,11,12},{13,14,15,16} };
    for (i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//Array - Introduction to 2D Array
    int i,j;
    int A[3][4]={ {5,6,7,8},{9,10,11,12},{13,14,15,16} };
    for (i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//Array - Introduction to 2D Array
    int i,j;
    int A[4][5]={ {10,11,12,13,14,},{15,16,17,18,19},
    {20,21,22,23,24},{25,26,27,28,29} };
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//Array - Getting input/Scaning for 2D Array
    int i,j;
    int A[3][4];
    for (i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//Array - Getting input/Scaning for 2D Array
    int i,j;
    int A[3][4];
    //Scanning/input part--
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //printinng/output part--
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//Array - Getting input/Scaning for 2D Array
//Array - Simple Matrix-- A and B matrix
    int i,j;
    int A[3][4], B[3][4];
    //Scanning A matrix
    printf("Enter elements for A matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //printinng A matrix
    printf("A = ");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    //Scanning B matrix
    printf("Enter elements for B matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //printinng B matrix
    printf("B = ");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//Array - Getting input/Scaning for 2D Array
//Array - Simple Matrix-- A and B matrix
    int i,j;
    int A[3][4],B[3][4];
    //Scanning/input part--
    printf("Enter elements for A matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //printinng/output part--
    printf("A matrix : \n");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements for B matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //printinng/output part--
    printf("B matrix : \n");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//////
//Array - Getting input/Scaning for 2D Array
//Array - Simple Matrix-- A and B matrix
//Array - Matrix Addition & Subtraction
    int i,j,numberOfRows,numberOfCols;
    int A[10][10],B[10][10],C[10][10];
    printf("Enter the numbers of Rows and cols : ");
    scanf("%d %d",&numberOfRows,&numberOfCols);
//Scanning/input A matrix
    printf("Enter elements for A matrix: \n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
//printinng/output A matrix
    printf("A matrix : \n");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//Scanning/input B matrix
    printf("Enter elements for B matrix: \n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
//printinng/output B matrix
    printf("\nB matrix : \n");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//Scanning/input C matrix
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        printf("\n");
    }
//printinng/output C matrix
    printf("A + B = ");
    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }


    getch();
}
