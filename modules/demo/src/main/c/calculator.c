#include "calculator.h"

int calculate(int left, char operator, int right) {
    switch (operator) {
        case '+':
            return left + right;
        case '-':
            return left - right;
        case '*':
            return left * right;
        case '/':
            return left / right;
        case '%':
            return left % right;
        default:
            return 0;
    }
}
