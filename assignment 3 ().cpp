#include <stdio.h>


 main()
{
 float num1;
 float num2;
 char op;
 float result;

                 printf("enter the first number:");
                 scanf(" %f",&num1);

                 printf("enter the second number:");
                 scanf(" %f",&num2);

                 printf("enter the operation:");
                scanf (" %c",&op);

                 switch(op)
                 {
                 case'*':
                    result=num1*num2;
                    printf(" %f",result);
                    break;

                 }







}
