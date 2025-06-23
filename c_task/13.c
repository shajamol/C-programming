/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x=8;
    int y=12;
    int z=10;
    if(x==y&&y==z){
    printf("It is a equilateral triangle");
    }
    else if(x==y&&y!=z){
        printf("It is a isosceles triangle");
    }
    else{
        printf("It is a scalene triangle");
    }
    

    return 0;
}
