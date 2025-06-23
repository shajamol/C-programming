/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x;
  printf("Enter A Number:-\n");
  scanf("%d", &x);
  
 switch(x)
 {
   case 1: printf("January");
   break;
   case 2: printf("February");
   break;
   case 3: printf("March");
   break;
   case 4: printf("April");
   break;
   case 5: printf("May");
   break;
   case 6: printf("June");
   break;
   case 7: printf("July");
   break;
   case 8: printf("August");
   break;
   case 9: printf("september");
   break;
   case 10: printf("october");
   break;
   case 11: printf("November");
   break;
   case 12: printf("December");
   break;
   default : printf("Enter a Valid number\nWrong Entry");
 }
  

    return 0;
}
