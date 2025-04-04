#include "calculator.h"
#include <cstdlib>

using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

int factorial(int n) {
    if (n == 0) return 1;
    int result = 1;
    for (int i = 1; i <= n; ++i) result *= i;
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int random(int min, int max) {
    return rand() % (max - min + 1) + min;
}

double power(double base, int exponent) {
    if (exponent == 0) return 1;
    double result = base;
    for (int i = 1; i < abs(exponent); ++i) {
        result *= base;
    }
    return (exponent > 0) ? result : 1 / result;
}
