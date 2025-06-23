/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int angle1, angle2, angle3;

  printf("Enter the three angles of the triangle: ");
  scanf("%d %d %d", &angle1, &angle2, &angle3);

  if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
    printf("The triangle is valid.\n");
  } else {
    printf("The triangle is not valid.\n");
  }


    return 0;
}
