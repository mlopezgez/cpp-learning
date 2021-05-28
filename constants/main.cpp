#include <iostream>
using std::cout;

#define Y 10

int main()
{
    const int X = 5;

    // X = 10;
    //main.cpp:7:7: error: cannot assign to variable 'x' with const-qualified type 'const int'
    //     x = 10;
    //     ~ ^
    // main.cpp:6:15: note: variable 'x' declared const here
    //     const int x = 5;
    //     ~~~~~~~~~~^~~~~
    // 1 error generated.
    enum { y = 100 };
    // y = 50;
    // main.cpp:19:7: error: expression is not assignable
    // y = 50;
    // ~ ^
    // 1 error generated.
}