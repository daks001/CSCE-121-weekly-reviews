#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> x) {
    for (int i = 0; i < x.size(); i++) {
        cout << x.at(i) << " ";
        // cout << x[i] << " ";
    }
    cout << endl;
}

int main() {
    //no size
    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    // cout << a << endl;
    print(a);

    //with size, all elements equal to 1
    vector<int> b(5, 1);
    print(b);

    //initialisation like arrays - new feature
    vector<int> c{4, 6, 7, 5, 8};
    print(c);
}