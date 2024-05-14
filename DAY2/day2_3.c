//Size of operator

#include<stdio.h>
int main(){

//Initialising Variables
    int num = 2; //4 
    char ch = 'A'; //1
    float fvar = 2.83; //4
    double davr = 10.45; //8
//By variable size print
    printf("\nSize of num = %d", sizeof(num));
    printf("\nSize of ch = %d", sizeof(ch));
    printf("\nSize of fvar = %d", sizeof(fvar));
    printf("\nSize of dvar = %d", sizeof(davr));
    printf("\n");
//By Data type size print
    printf("\nSize of int = %d", sizeof(int));
    printf("\nSize of ch = %d", sizeof(ch));
    printf("\nSize of favr = %d", sizeof(float));
    printf("\nSize of dvar = %d", sizeof(double));
    printf("\n");
// By value size print
    printf("\nSize of 'A' = %d", sizeof('A'));
    printf("\nSize of 1.2 = %d", sizeof(1.2));
    printf("\nSize of 1.2 = %d", sizeof(1.2f));
    printf("\n");
//By Arithmatic Operation size print
    printf("\nSize of 10 + 1.2 = %d", sizeof(10+1.2));
    printf("\nSize of 10 + A = %d", sizeof(10+'A'));
    printf("\n");
    
    return 0;
}