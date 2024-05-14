//Escape Sequance \n \r \t \b \" \' %%

#include<stdio.h>
int main(){
    //new line \n
    printf("\nHello PH28");

    //carriage return \r
    printf("\nHello PH28 \rHiiee");

    //tab \t
    printf("\nHello\tPH28");
    printf("\n\tHello PH28");

    //backspace \b
    printf("\nHello PH28\b\b12");
    printf("\nHello PH28\b\b  ");

    //For printing \"
    printf("\n\"Hello PH28\"");

    //For printing \'
    printf("\n\'Hello PH28\'");

    //For printing %
    printf("\nI got 80%");
    printf("\nI got 80%%");

    //For printing \n
    printf("\\nHello PH28");


    return 0;
}