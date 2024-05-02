#include <stdio.h>
int main()
{
    // int num;
    // printf("Hello World");
    // declaration
    int num;
    num = 10;      // initialization
    int num1 = 10; // Declation + Intialization
    char ch;
    ch = 'A';
    float fvar;
    fvar = 10.23;
    double dvar;
    dvar = 11.55;

    printf("\n num = %d", num);
    printf("\n ch = %c", ch);
    printf("\n fvar = %f", fvar);
    printf("\n dvar = %lf", dvar);
    printf("\n fvar = %.2f", fvar);
    printf("\n dvar = %.3lf", dvar);

    

    return 0;
}