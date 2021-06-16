#include <sstream>
#include "Walter_Mejia_Employee.h" 
using namespace std;

Employee::Employee(const string& first, const string& last, const string& ssn, int _Age) : firstName(first), lastName(last), socialSecurityNumber(ssn){
    Age = _Age;
}

void Employee::setFirstName(const string& first) {firstName = first;}

string Employee::getFirstName() const {return firstName;}

void Employee::setLastName(const string& last) {lastName = last;}

string Employee::getLastName() const {return lastName;}

void Employee::setSocialSecurityNumber(const string& ssn) {
    socialSecurityNumber = ssn;
}
string Employee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}
int Employee::getAge() const{
    return Age;
}


string Employee::toString() const {
    return getFirstName() + " "s + getLastName() + "\nsocial security number: "s + getSocialSecurityNumber()+ "\nAge: " + std::to_string(Age);
}
