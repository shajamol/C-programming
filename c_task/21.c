/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int digit;
    char *digitWords[] = {"Zero","One","Two","Three","Four","Five","Six","Seven",
    "Eight","Nine","ten"};

    printf("Enter a single digit (0-10): ");
    scanf("%d", &digit);

    if (digit >= 0 && digit <= 10) {
        printf("%s\n", digitWords[digit]);
    } else {
        printf("Invalid input. Please enter a single digit (0-10).\n");
    }

    return 0;
}