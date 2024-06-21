   //basic-calculator 
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    int a=1;

    // Input operator for calculation
    printf("Enter operator (+, -, *, /,^): ");
    scanf("%c", &operator);
// Input the numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform switch  based on operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: you cannot enter number 2 as zero \n");
                return 1; 
            }
            break;
	case '^':
	      // exponential
	      for(int i=0;i<num2;i++)
	{     a=a*num1;}
	      result =a;
	      break;

	      
        default:
            printf("Error: Invalid operator\n");
            return 0;
    }

    // result
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}

