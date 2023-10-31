#include <iostream>

int euclideanGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return euclideanGCD(b, a % b);
    }
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int gcd = euclideanGCD(num1, num2);

    std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;

    return 0;
}
