#include <iostream>

double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int base, exponent;
    std::cin >> base;
    std::cin >> exponent;

    double result = power(base, exponent);
    std::cout << result << std::endl;
}
