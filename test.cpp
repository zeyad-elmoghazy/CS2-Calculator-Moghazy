#include <iostream>
#include "calculator.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    cout << "5 + 3 = " << add(5, 3) << endl;
    cout << "5 - 3 = " << subtract(5, 3) << endl;
    cout << "5 * 3 = " << multiply(5, 3) << endl;
    cout << "10 / 2 = " << divide(10, 2) << endl;
    cout << "Factorial of 5 = " << factorial(5) << endl;
    cout << "GCD of 12 and 18 = " << gcd(12, 18) << endl;
    cout << "LCM of 12 and 18 = " << lcm(12, 18) << endl;
    cout << "Random number (1-100): " << random(1, 100) << endl;

    return 0;
}
