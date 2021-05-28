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

void print_pow(double base, int exponent)
{
    double result = power(base, exponent);
    std::cout << result << std::endl;
}

int main()
{
    double base;
    int exponent;
    std::cin >> base;
    std::cin >> exponent;
    print_pow(base, exponent);
}
