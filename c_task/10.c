/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    double equation,root1,root2;
    double realpt,imaginarypt;
    
    printf("enter values a,b and c:");
    scanf("%lf %lf %lf",&a,&b,&c);
    
    equation=b*b-4*a*c;
    
    if(equation>0){
        root1=(-b+sqrt(equation))/(2*a);
        root2=(-b-sqrt(equation))/(2*a);
        printf("roots are real and distinct:\n");
        printf("root1=%.2lf\n",root1);
         printf("root2=%.2lf\n",root2);
    }
    else if (equation==0){
        root1=root2=-b/(2*a);
        printf("roots are real and equal:\n");
        printf("root1=root2=%.2lf\n",root1);
    }
    else{
        realpt=-b/(2*a);
        imaginarypt=sqrt(-equation)/(2*a);
        printf("roots are complex and conjugate:\n");
        printf("root1=%.2lf+%.2lfi\n",realpt,imaginarypt);
        printf("root2=%.2lf-%.2lfi\n",realpt,imaginarypt);
        
    }
    return 0;
}
