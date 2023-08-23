#include <stdio.h>
#include <math.h>

int main (void) {
    double a, b, decimalA, decimalB;
    char operand;


    printf("Enter the first number: \n");
    scanf("%lf", &a); 
    printf("Enter the second number: \n");
    scanf("%lf", &b); 

    getchar(); //Takes in the the Newline character
    printf("Enter the operand number: \n");
    scanf("%c", &operand); 

    double intPartA, fracPartA;  
    double intPartB, fracPartB;
    fracPartA = modf(a, &intPartA);  
    fracPartB = modf(b, &intPartB);
    switch(operand)
    {
        case '*':
            if (fracPartA == 0.0 && fracPartB == 0.0) { // checkinh if the fraction part is 0 if it is then the numnber is an integer.
            printf("%d * %d = %d\n", (int)intPartA, (int)intPartB, (int)(intPartA * intPartB));
            }
            else {
                printf("%.2lf * %.2lf = %.2lf\n", a, b, a*b);
            }
            break;
        case '+':
          if (fracPartA == 0.0 && fracPartB == 0.0) {
            printf("%d * %d = %d\n", (int)intPartA, (int)intPartB, (int)(intPartA + intPartB));
            }
            else {
                printf("%.2lf * %.2lf = %.2lf\n", a, b, a+b);
            }
            break;
        case '-':
            if (fracPartA == 0.0 && fracPartB == 0.0) {
            printf("%d * %d = %d\n", (int)intPartA, (int)intPartB, (int)(intPartA - intPartB));
            }
            else {
                printf("%.2lf * %.2lf = %.2lf\n", a, b, a-b);
            }
            break;
        case '/':
            if (fracPartA == 0.0 && fracPartB == 0.0) {
            printf("%d * %d = %d\n", (int)intPartA, (int)intPartB, (int)(intPartA / intPartB));
            }
            else {
                printf("%.2lf * %.2lf = %.2lf\n", a, b, a/b);
            }
            break;
        default:
            printf("Not valid\n");

    }
    return 0;
}

