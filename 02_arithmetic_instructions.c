#include <stdio.h>

int main(){
    // giving the values to the operends
    
    int a = 4;
    int b = 8;
    // showing the output

    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);

    // showing the sum combination
    printf("The value of 5 + 6 is %d\n", 5+6); // int --->int
    printf("The value of 6 + 5.6 is %f\n", 6+5.6); // int --->float
    printf("The value of 6.1 + 5.6 is %f\n", 6.1+5.6); // float --->float 
    printf("The value of 5/2 is %d\n", 5/2); // justification of int
    printf("The value of 5.0/2 is %f\n", 5.0/2); // justification of float
    // int and float variable justification

    int x = 3.4;
    float y = 8;
    // showing the output

    printf("The value of x is %d\n", x);
    printf("The value of y is %f\n", y);
    return 0;
}