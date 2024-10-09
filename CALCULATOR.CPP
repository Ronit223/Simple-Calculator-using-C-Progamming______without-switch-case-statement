//WAP that access two numbers and an operator;then display the result of addition , substraction , multiplication and division based on the operator.

#include<stdio.h>
#include<conio.h>

void main()

{
 int a , b , c ,r , r0 , r_store = 0 , i , r1, counts = 0;
 char operatr;
 clrscr();
 printf("Enter First Number: ");
 scanf("%d", &a);
 printf("Enter Second Number: ");
 scanf("%d", &b);
 printf("Choose an operator: ");
 scanf(" %c", & operatr);
 if ( operatr == '+')
  printf("%d + %d = %d",a,b,a+b);
 else if ( operatr == '-' )
  printf("%d - %d = %d",a,b,a-b);
 else if ( operatr == '*' )
  printf("%d * %d = %d",a,b,a*b);
 else if ( operatr == '/' )
  r = a % b;
  if ( r == 0 )
   printf("%d / %d = %d ", a,b,a/b);
  else if ( b == 0 )
   printf("%d / 0 = Not defined",a);
  else
   printf("%d / %d = %f",a,b,(float)a/b);
 getch();


}








