/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char grade;
    printf("Enter a grade (E, V, G, A, F):");
    scanf(" %c", &grade);
    switch (grade) {
        case 'E':
            printf("Excellent\n");
            break;
        case 'V':
            printf("Very Good\n");
            break;
        case 'G':
            printf("Good\n");
            break;
        case 'A':
            printf("Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    return 0;
}