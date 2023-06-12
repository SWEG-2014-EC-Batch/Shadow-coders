#include <iostream>
using namespace std;
// Base case: Empty function to terminate recursion
double calculateProduct() {
    return 1.0;  // Return 1 as the product identity
}

// Recursive function to calculate product of variable number of arguments
template<typename... Args>
double calculateProduct(double arg, Args... args) {
    return arg * calculateProduct(args...);  // Recursive call with remaining arguments
}

int main() {
    cout << "Product: " << calculateProduct(2.5, 3.0, 1.5) << endl;
    cout << "Product: " << calculateProduct(2,2,2) << endl;
    cout << "Product: " << calculateProduct(2,0.09,20,3) << endl;
    cout << "Product: " << calculateProduct(1,2,3) << endl;
    return 0;
}
