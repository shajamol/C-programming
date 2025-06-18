/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    int a[]={1,2,3,4,5,6,7};
    int size=sizeof (a)/sizeof (a[0]);
    
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    for(i=size-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}
