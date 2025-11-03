#include <iostream>

namespace calc {
    int number = 5;
    std::string mess = "Welcome";
    int sum(int num1, int num2) {
        return num1 + num2;
    }
}

using namespace calc;

int main() {
    std::cout << sum(3, 3) << "\n";
    std::cout<<"\nHello World, " << mess;
    return 0;
}

