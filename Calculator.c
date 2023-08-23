#include <stdio.h>
#include <math.h>

int main (void) {
    double a, b, decimalA, decimalB;
    char operand;


    printf("Enter the first number: \n");
    if(scanf("%lf", &a) != 1) {  // if the program has not read a double number go inside the if block.
        printf("This number is invalid\n");
        return 1;
    }
    printf("Enter the second number: \n");
    if(scanf("%lf", &b) != 1) {
        printf("This number is invalid\n");
        return 1;
    }
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
            printf("%d + %d = %d\n", (int)intPartA, (int)intPartB, (int)(intPartA + intPartB));
            }
            else {
                printf("%.2lf + %.2lf = %.2lf\n", a, b, a+b);
            }
            break;
        case '-':
            if (fracPartA == 0.0 && fracPartB == 0.0) {
            printf("%d - %d = %d\n", (int)intPartA, (int)intPartB, (int)(intPartA - intPartB));
            }
            else {
                printf("%.2lf - %.2lf = %.2lf\n", a, b, a-b);
            }
            break;
        case '/':
        if (b != 0.0) {
            if (fracPartA == 0.0 && fracPartB == 0.0) {
            printf("%d / %d = %d\n", (int)intPartA, (int)intPartB, (int)(intPartA / intPartB));
            }
            else {
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a/b);
            }
            break;
        }
        else {
            printf("undefined\n");
        }
        break;

        default:
            printf("Not a valid operand\n");

    }
    return 0;
}

