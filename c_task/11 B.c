/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int roll_no, phy_marks, che_marks, ca_marks, total_marks;
    char name[50];
    float percentage;
    
    printf("Input the Roll Number of the student : ");
    scanf("%d", &roll_no);
    printf("Input the Name of the Student : ");
    scanf("%s", name);
    
    printf("Input the marks of Physics, Chemistry and Computer Application : "); 
    scanf("%d %d %d", &phy_marks, &che_marks, &ca_marks);
    
    total_marks = phy_marks + che_marks + ca_marks;
    percentage = (float)total_marks / 3.0;

    printf("Division = ");
    if (percentage >= 60){
     printf("First\n");}
     else if (percentage >= 45){
     printf("Second\n");}
     else if (percentage >= 33){
      printf("Third\n");}
      else{
      printf("Fail\n");
      }
    printf("Roll No : %d\n", roll_no);
    printf("Name of Student : %s\n", name);
    printf("Marks in Physics : %d\n", phy_marks);
    printf("Marks in Chemistry : %d\n", che_marks);
    printf("Marks in Computer Application : %d\n", ca_marks);
    printf("Total Marks = %d\n", total_marks);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}