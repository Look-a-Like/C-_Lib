#include <iostream>

using namespace std;

int myFunction(int a) {
    std::cout << "This function will return an integer. " <<a<< std::endl;
    return a;
}

int main() {
    int result = myFunction(9);
    std::cout << "The function returned: " << result << std::endl;
    return 0;
}
