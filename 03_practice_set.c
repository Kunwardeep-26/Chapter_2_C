#include <stdio.h>

int main(){
    // creating the number variable
    int num;
    // writing the output

    printf("Enter the number\n");
    scanf("%d", &num);
    // result of the test

    printf("Divisibility test returns: %d\n", num%97);

     return 0;
}   