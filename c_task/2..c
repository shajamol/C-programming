/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int temp=34;
    
    if(temp<0){
    printf("freezing weather");
    }
    else if(temp>0&temp<10){
        printf("very cold weather");
    }
    else if(temp>10&temp<20){
        printf("cold weather");
    }
    else if(temp>20&temp<30){
        printf("normal temp");
    }
    else if(temp>30&temp<40){
        printf("its hot");
    }
    else {
        printf("its very hot");
    }

    return 0;
}