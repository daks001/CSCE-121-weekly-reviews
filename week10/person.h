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
        string place_of_birth;
    
    //constructor
    Person(string name, int age, int ssn, string place) {
        this->name = name;
        this->age = age;
        this->SSN = ssn;
        this->place_of_birth = place;
    }


    bool eligible_to_vote() {
        return (age >= 18 && place_of_birth == "USA");
    }
};

#endif 