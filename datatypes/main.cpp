#include <iostream>
#include <float.h>
#include <climits>

using std::cout;

int main()
{
    bool wena = true;
    char x = 126;
    short a;
    int b;
    long c;
    long long d;
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    float e = 10.0 / 3;
    e = e * 10000000;
    double f = 7.7E4;
    long double g;

    cout << std::fixed << e << std::endl;
    cout << LDBL_DIG << std::endl;
}