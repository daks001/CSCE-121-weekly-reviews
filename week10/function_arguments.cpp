#include <iostream>
using namespace std;

//pass by value
int add (int x, int y) {
    return x+y;
}

//pass by reference
int add1 (const int& x, int& y) {
    // x = 5; //not allowed
    y = 3;
    return x+y;
}

//power of passing by reference
void add1_modified(int& x, int& y, int& sum, int& product) {
    sum = x+y;
    product = x*y;
}

int main() {
    int num1 = 10;
    int num2 = 15;
    int sum = add(num1, num2);
    cout << "num1: " << num1 << ", num2: " << num2 << ", sum: " << sum << endl << endl;

    sum = add1(num1, num2);
    cout << "num1: " << num1 << ", num2: " << num2 << ", sum: " << sum << endl << endl;

    int a = 4, b = 7, product = 0;
    sum = 0;
    add1_modified(a, b, sum, product);
    cout << "a: " << a << ", b: " << b << ", sum: " << sum << ", product: " << product << endl;

}