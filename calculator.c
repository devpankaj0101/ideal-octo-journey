#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
    int num1,num2,sum,mul,substract,divide,remainder,option;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.remainder\n");
    printf("6.exit\n");
    do{
        printf("\nchoose an option\n");
        scanf("%d",&option);

    if(option==1)
    {
        printf("\n***ADDITION***\n");
        printf("\nEnter first value\n");
        scanf("%d",&num1);
        printf("\nEnter Second value\n");
        scanf("%d",&num2);
        sum=num1+num2;
        printf("\nSum OF %d and %d is %d",num1,num2,sum);
    }else if(option==2)
    {
        printf("\n***SUBSTRACTION***\n");
        printf("\nenter first value\n");
        scanf("%d",&num1);
        printf("\nenter second value\n");
        scanf("%d",&num2);
        substract=num1-num2;
        printf("\nsub of %d and %d is %d",num1,num2,substract);
    }else if(option==3)
    {
        printf("\n***MULTIPLICATION***\n");
        printf("\nEnter first value\n");
        scanf("%d",&num1);
        printf("\nEnter second value\n");
        scanf("%d",&num2);
        mul=num1*num2;
        printf("\nMultiplication of %d and % d is %d",num1,num2,mul);
    }else if(option==4)
    {
        printf("\n***DIVISION***\n");
        printf("Enter the first value \n");
        scanf("%d",&num1);
        printf("\nEnter the second value\n");
        scanf("%d",&num2);
        divide=num1/num2;
        printf("DIV of %d and %d is %d ",num1,num2,divide);
    }else if(option==5)
    {
        printf("\n***REMAINDER***\n");
        printf("\nenter the first value\n");
        scanf("%d",&num1);
        printf("\nEnter the second value\n");
        scanf("%d",&num2);
        remainder=num1%num2;
        printf("\nRemainder of %d and %d is %d\n",num1,num2,remainder);

    }else if(option==6)
    {
        exit(1);
    }else
    {
        printf("\ninvalid option\n");

    }
    }while((option>=1)&&(option<=6));
    return 0;
}
