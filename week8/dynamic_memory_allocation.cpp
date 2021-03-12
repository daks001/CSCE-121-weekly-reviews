#include <iostream>
using namespace std;

int main() {
    cout << "Memory on the stack!" << endl;
    int a = 10; 
    cout << "a is: " << a << endl;
    cout << "&a is: " << &a << endl;

    cout << endl << "Memory on the heap!" << endl;
    int* ptr = new int(10);
    cout << "ptr is: " << ptr << endl;
    cout << "&ptr is: " << &ptr << endl;
    cout << "*ptr is: " << *ptr << endl;
}