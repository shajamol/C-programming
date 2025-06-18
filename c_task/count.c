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
    int count=0;
    int numbers=0;
    int a[7]={1,2,3,4,5,6,7};
    
    for(i=0;i<7;i++){
        if(a[i]%2==0){
           count++;
    }
    else{
        numbers++;
    }
}
printf("%d\n",count);
printf("%d\n",numbers);
    return 0;
}
