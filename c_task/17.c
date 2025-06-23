/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, profitLoss;
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profitLoss = sellingPrice - costPrice;
        printf("Profit: %.2f\n", profitLoss);
    } else if (costPrice > sellingPrice) {
        profitLoss = costPrice - sellingPrice;
        printf("Loss: %.2f\n", profitLoss);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
