#include <iostream>

using namespace std;

namespace calc {
    int number = 5;
    string mess = "Welcome";
    int sum(int num1, int num2) {
        return num1 + num2;
    }
}

using namespace calc;

int main() {
    cout << sum(3, 3) << "\n";
    cout<<"\nHello World, " << mess;
    return 0;
}

