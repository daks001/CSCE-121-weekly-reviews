#include <iostream>
using namespace std;

void print_array(int (&arr)[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a = 10;
    int* b = &a;
    cout << "a is = " << a << endl;
    cout << "&a is = " << &a << endl;
    cout << "b is = " << b << endl;
    cout << "&b is = " << &b << endl;
    cout << "dereferencing, *b is = " << *b << endl;
    cout << "...................." << endl;

    double* n = nullptr;
    cout << n << endl;
    cout << n+1 << endl;
    //0 1 2 3 4 5 6 7, 8
    cout << "...................." << endl;

    char s[] = "hello"; //{'h', 'e', 'l', 'l', 'o'}
    char* c_ptr = s;
    cout << c_ptr << endl;
    cout << "*c_ptr is = " << *c_ptr << endl;
    cout << "*(c_ptr+1) is = " << *(c_ptr+1) << endl;

    cout << "...................." << endl;
    int arr[] = {1, 2, 3, 4, 5}; //stack
    int* arr_ptr = arr;
    cout << "&arr is = " << &arr << endl; 
    cout << "arr_ptr is = " << arr_ptr << endl;
    cout << "*arr_ptr is = " << *arr_ptr << endl;
    cout << "*(arr_ptr+1) is = " << *(arr_ptr+1) << endl;

    //{-1, -1, -1, -1, -1}
    //{10, 20, -1, -1, -1}

    // cout << "...................." << endl;
    int array[5][5] = {};
    cout << "uninitialised array is:" << endl;
    print_array(array);
    
    for (int i = 0; i < 5; i++) { //rows
        for (int j = 0; j < 5; j++) { //columns
            array[i][j] = j;
        }
    }

    cout << "initialised array is:" << endl;
    print_array(array);
}

    