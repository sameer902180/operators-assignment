#include <stdio.h>


 main()
{
 int dividend, divisor;
 int quotient, remainder;

 printf("enter dividend:");
 scanf("%d",& dividend);
 printf("enter divisor:");
 scanf("%d", &divisor);

 quotient=dividend/divisor;
 remainder=dividend%divisor;

 printf("quotient=%d,remainder:%d",quotient,remainder);
 return 0;







}
