#include<stdio.h>
int main()
{
//169 - Array - Introduction to 2D Array
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
//169 - Array - Introduction to 2D Array
//170 - Array - Getting input for 2D Array
    int i,j;
    int A[3][4];
    //Getting input/Scanning for 2D Array
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //Getting output/Printing for 2D Array
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//169 - Array - Introduction to 2D Array
//170 - Array - Getting input for 2D Array
//171 - Array - Simple Matrix
    int i,j;
    int A[3][4],B[3][4];
    //Getting input/Scanning for 2D Array
    //Scanning A matrix
    printf("Enter Elements for A matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //Getting output/Printing for 2D Array
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
    printf("\n\nEnter Elements for B matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    //Getting output/Printing for 2D Array
    printf("B = ");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
//172 - Array - Matrix Addition & Subtraction
    int i,j,numbersOfRows,numbersOfCols;
    int A[10][10],B[10][10],C[10][10];

    printf("Enter the number of rows and cols: ");
    scanf("%d %d",&numbersOfRows,&numbersOfCols);
    //Getting input/Scanning for 2D Array
    //Scanning A matrix
    printf("Enter Elements for A matrix: \n");
    for(i=0; i<numbersOfRows; i++)
    {
        for(j=0; j<numbersOfCols; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //Scanning B matrix
    printf("\n\nEnter Elements for B matrix: \n");
    for(i=0; i<numbersOfRows; i++)
    {
        for(j=0; j<numbersOfCols; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    //Getting output/Printing A matrix
    printf("A = ");
    for(i=0; i<numbersOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numbersOfCols; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    //Getting output/Printing B matrix
    printf("\nB = ");
    for(i=0; i<numbersOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numbersOfCols; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    //Adding the (A+B) matrix
    for(i=0; i<numbersOfRows; i++)
    {
        for(j=0; j<numbersOfCols; j++)
        {
            C[i][j]= A[i][j] - B[i][j];
        }
    }
    //Getting output/Printing C matrix
    printf("\nA - B = ");
    for(i=0; i<numbersOfRows; i++)
    {

        for(j=0; j<numbersOfCols; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");
    }
//173 - Array - Matrix Multiplication (part-1)
//174 - Array - Matrix Multiplication (part-2)
    int first[10][10],second[10][10],
        result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows and column for first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and column for secound matrix: ");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Eror !! column of first matrix not equal to row of second matrix: \n");

        printf("Enter rows and column for first matrix: ");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows and column for secound matrix: ");
        scanf("%d %d",&r2,&c2);
    }
    //Taking input for first matrix
    printf("\nEnter elements for first matrix: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    //Taking input for second matrix
    printf("\nEnter elements for second matrix: \n");
    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    //Array - Matrix Multiplication (part-2)
    //Multiplying matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    //Printing first matrix
    printf("\nFirst Matrix: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    //Printing second matrix
    printf("\nSecond Matrix: \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    //Printing result matrix
    printf("\nResult Matrix: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
//175 - Array - Matrix Transpose
    int A[10][10],transpose[10][10],i,j,row,col;

    printf("Enter rows and column for first matrix: ");
    scanf("%d %d",&row,&col);

    //Getting the elements for the matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //Transpose Matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose [j][i] = A[i][j];
        }
    }
    //Printing the matrix
    printf("\nEntered Matrix: \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    //Printing Transpose matrix
    printf("\nTranspose Matrix: \n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
//176 - Array - Sum of diagonal elements of a matrix
    int A[3][3],i,j,sum=0;
    //Getting the elements for the matrix
    printf("Enter the elements for the matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //Printing the matrix
    printf("\nEntered Matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    //sum of Diagonal elements
    printf("Diagonal elements: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }
    printf("\nSum of Diagonal elements = %d\n",sum);
//177 - Array - Sum of upper & lower triangles elements
    int A[3][3],i,j,upperSum=0,lowerSum=0;
    //Getting the elements for the matrix
    printf("Enter the elements for the matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //Printing the matrix
    printf("\nEntered Matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    //sum of upper and lower triangle elements
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
            {
                upperSum = upperSum + A[i][j];
            }
            if(i>j)
            {
                lowerSum = lowerSum + A[i][j];
            }
        }
    }
    printf("\nSum of upperSum triangle elements = %d\n",upperSum);
    printf("\nSum of lowerSum triangle elements = %d\n",lowerSum);



    getch();
}
