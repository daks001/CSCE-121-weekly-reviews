#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person {
    int SSN; //private
    public:
        string name;
        int age;
        string place;
    
    Person();
    Person(string name, int age, int SSN, string place);
    //functions
    int get_ssn() { return SSN; }
    bool eligible_to_vote();
    friend ostream& operator<<(ostream& os, const Person& p);
};

#endif 