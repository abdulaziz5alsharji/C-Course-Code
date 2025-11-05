#include <iostream>
#include <C:\Users\MOBPC\Desktop\Programming\C++\second_lesson.cpp>

namespace calc {
    int number = 5;
    std::string mess = "Welcome";
    int sum(int num1, int num2) {
        return num1 + num2;
    }
}

using namespace calc;

int main() {
    print();
    print("Welomce to my App");
    std::cout << sum(3, 3) << std::endl;
    std::cout<<"\nHello World, " << mess;
    return 0;
}

