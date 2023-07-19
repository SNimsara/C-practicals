//Write a C program for each of the following question

//1. Display your name and school name in two separate lines
#include <stdio.h>
#include <stdlib.h>
int main()
{
 printf("Name: G.M.S. Nimsara\nSchool: Bomiriya Central Collage");
 return 0;
}

/*2. Display the following output using printf() statements
*
**
***
****
*****  */
#include <stdio.h>
#include <stdlib.h>
int main()
{
 printf("*\n**\n***\n****\n*****\n");
 return 0;
}

//3. Input values for int,float,double and char data types and display the value of each of the variable.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a=5;
 printf("%d\n",a);
 float b=7.82;
 printf("%.2f\n",b);
 double c=9.999999;
 printf("%lf\n",c);
 char d='z';
 printf("%c\n",d);
 return 0;
}

//4. Input two integers and display the total
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a,b,sum;
 printf("Enter first number: ");
 scanf("%d",&a);
 printf("Enter second number: ");
 scanf("%d",&b);
 sum=a+b;
 printf("Total is %d",sum);
 return 0;
}

//5. Input two numbers with decimals and display the average with decimals
#include <stdio.h>
#include <stdlib.h>
int main()
{
 float a,b,avg;
 printf("Enter first decimal number: ");
 scanf("%f",&a);
 printf("Enter second decimal number: ");
 scanf("%f",&b);
 avg=(a+b)/2;
 printf("Average is %f\n",avg);
 return 0;
}

//6. Input a student name, birth year and display student name with age.
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int byear,age;
 char name[20];
 printf("Enter student name: ");
 scanf("%s",&name);
 printf("Enter birth year: ");
 scanf("%d",&byear);
 age=2023-byear;
 printf("%s, your age is %d\n",name,age);
 return 0;
}

//7. Input two numbers, swap the values and display the output. ( Before swap and after swap)
#include <stdio.h>
#include <stdlib.h>
int main()
{
 float first,second,temp;
 printf("Enter the first number: ");
 scanf("%f",&first);
 printf("Enter the second number: ");
 scanf("%f",&second);
 temp=first;
 first=second;
 second=temp;
 printf("Before swap,first number is %.2f\n",first);
 printf("After swap,first number is %.2f\n",second);
 return 0;
}

/*8. Execute the following code and analyze the output.
#include<stdio.h>
main()
{
printf("The color: %s\n", "blue");
printf("First number: %d\n", 12345);
printf("Second number: %04d\n", 25);
printf("Third number: %i\n", 1234);
printf("Float number: %3.2f\n", 3.14159);
printf("Hexadecimal: %x\n", 255);
printf("Octal: %o\n", 255);
printf("Unsigned value: %u\n", 150);
printf("Just print the percentage sign %%\n", 10);
}
*/

/*
  Output :-
The color: blue
First number: 12345
Second number: 0025
Third number: 1234
Float number: 3.14
Hexadecimal: ff
Octal: 377
Unsigned value: 150
Just print the percentage sign 
*/
