/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int year;
    
    printf("enter a year:");
    scanf("%d",&year);
    if((year%400==0)||((year%4==0)&&(year%100!=0))){
        printf("%d is a leap year.\n",year);
    }
    else{
        printf("%d is not a leap year.\n",year);
    }
    return 0;
}