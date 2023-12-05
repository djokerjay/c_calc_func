#include <stdio.h>
#include "mycalcfunc.h"
int main()
{
    int num1;
    int num2;
    char op;
    int ans;
    printf("Input Number 1:");
    scanf("%d", &num1);

    printf("Input Number 2:");
    scanf("%d", &num2);

    printf("Enter operation + , - , / , * :");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        ans = opAdd(num1, num2);
        break;
    case '-':
        ans = opSubtract(num1, num2);
        break;
    case '*':
        ans = opMultiply(num1, num2);
        break;
    case '/':
        ans = opDivide(num1, num2);
        break;
    case 'e':
        printf("Thank you for using.");
        return 0;
        break;
    default:
        printf("Invalid Operation");
        return 0;
        break;
    }
    printf("The answer is %d", ans);
    return 0;
}

int opAdd(int num1, int num2)
{
    return num1 + num2;
}

int opSubtract(int num1, int num2)
{
    return num1 - num2;
}
int opMultiply(int num1, int num2)
{
    return num1 * num2;
}

int opDivide(int num1, int num2)
{
    return num1 / num2;
}