//Adding between Arithmetic Operator--
int main()
{

    int num1,num2,sum;
        printf("enter two numbers--");
        scanf("%d %d",&num1,&num2);
        sum= num1/num2;
        printf("sum is = %d",sum);
    //int---
        int num1,num2,sum;
        printf("Enter two numbers-- ");
        scanf("%d %d",&num1,&num2);
        sum=num1+num2;
        printf("sum is= %d",sum);
    //float---
        float num1,num2,sum;
        printf("enter to float numbers-- ");
        scanf("%f %f",&num1,&num2);
        sum = num1+num2;
        printf("sum is = %.2f",sum);
    //double---
        double num1,num2,sum;
        printf("enter to double numbers-- ");
        scanf("%lf %lf",&num1,&num2);
        sum = num1+num2;
        printf("sum is = %lf",sum);
//int--avrege--
     int num1,num2,sum;
     float avg;
     printf("Enter two numbers-- ");
     scanf("%d %d",&num1,&num2);
     sum=num1+num2;
     printf("sum is= %d\n",sum);
     avg=(float)sum/2; //type custing--
     printf("average is-- %.2lf",avg);
//floating--avrege--
     float num1,num2,sum;
     float avg;
     printf("enter two numbers--");
     scanf("%f %f",&num1,&num2);
     sum=num1+num2;
     printf("sum is= %.2f\n",sum);
     avg= sum/(float)2; //type custing--
     printf("avarege sum-- %.2lf",avg);
//All doing +,-,*,/,% between Arithmetic Operator--
     int num1,num2,result;
     printf("enter two numbers-- ");
     scanf("%d %d",&num1,&num2);
     result=num1+num2;
     printf("sum is = %d\n",result);
     result= num1-num2;
     printf("sub is = %d\n",result);
     result=num1*num2;
     printf("multi is = %d\n",result);
     result=num1/num2;
     printf("div is = %d\n",result);
     result=num1%num2;
     printf("remainder is = %d\n",result);

     int num1,num2,result;
     printf("enter two numbers--");
     scanf("%d %d",&num1,&num2);
     result=num1+num2;
     printf("sum is = %d\n",result);
     result=num1-num2;
     printf("sub is = %d\n",result);
     result=num1*num2;
     printf("multiple is = %d\n",result);
     result=num1/num2;
     printf("div is = %d\n",result);
     result=num1%num2;
     printf("remainder is = %d\n",result);
//base,height,area----
     float base,height,area;

     printf("base is -- ");
     scanf("%f",&base);

     printf("height is -- ");
     scanf("%f",&height);

     area= (float)0.5*base*height;
     printf("area is-- %.2lf\n",area);

    float base,height,area;
    printf("base is--");
    scanf("%f",&base);

    printf("height is--");
    scanf("%f",&height);
    area= (float)1/2*base*height;//type custing--
    printf("area is-- %.2lf\n",area);



//return 0;
    getch ();
}
