/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int physics=65;
    int chemistry=51;
    int maths=72;
    if(physics>=55&&chemistry>=50&&maths>=65&&maths+chemistry+physics>=190){
        printf("eligible");
    }
    else if (maths+physics >=140){
    printf("eligible");
    }
    else{
        printf("not eligible");
    }

    return 0;
}