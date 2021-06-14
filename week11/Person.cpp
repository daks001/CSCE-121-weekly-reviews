#include "Person.h"

//default constructor
Person::Person() : name(""), age(0), SSN(0), place("") {}

//parameterised constructor
// Person::Person(string name, int age, int SSN, string place) {
//     this->name = name;
//     this->age = age;
//     this->SSN = SSN;
//     this->place = place;
// }

//member initialisation list
Person::Person(string name, int age, int SSN, string place) : name(name), age(age), SSN(SSN), place(place) {}

bool Person::eligible_to_vote() {
    return (age >= 18 && place == "USA");
}

ostream& operator<<(ostream& os, const Person& p) {
    os << p.name << " is " << p.age << " years old and was born in " << p.place << endl;
    return os;
}