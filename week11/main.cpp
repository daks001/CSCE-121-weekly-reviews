#include "Person.h"

int main() {
    Person P1("Tom", 18, 101, "USA");
    cout << P1;
    cout << "P1.name is " << P1.name << endl; 
    // cout << "P1.SSN is " << P1.SSN << endl; //this will give error 
    cout << "P1.SSN is " << P1.get_ssn() << endl; //this works fine
    
    bool is_eligible = P1.eligible_to_vote();
    if (is_eligible) 
        cout << "Tom is eligible to vote" << endl;
    else 
        cout << "Tom is not eligible" << endl;

    Person P2("Alice", 25, 456, "Canada");
    is_eligible = P2.eligible_to_vote();
    if (is_eligible) 
        cout << "Alice is eligible to vote" << endl;
    else 
        cout << "Alice is not eligible" << endl;
}