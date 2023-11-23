#include <iostream>

int main() {
    int num1, num2, sum = 0;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Ensure num1 is less than or equal to num2
    if (num1 > num2) {
        std::swap(num1, num2);
    }

    for (int i = num1; i <= num2; ++i) {
        sum += i;
    }

    std::cout << "Sum from " << num1 << " to " << num2 << " is " << sum << std::endl;

    return 0;
}
