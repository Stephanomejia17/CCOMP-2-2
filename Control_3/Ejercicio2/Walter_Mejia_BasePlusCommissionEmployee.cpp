#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include "Walter_Mejia_BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn,int Age, double sales, double rate, double salary) : CommissionEmployee(first, last, ssn,Age, sales, rate ){
    setBaseSalary(salary);
}
void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    if(salary < 0.0) {
        throw invalid_argument("Salary must be >= 0.0");
    }
    baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}
double BasePlusCommissionEmployee::earnings() const {
    return getBaseSalary() + CommissionEmployee::earnings();
}
string BasePlusCommissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "base-salaried " << CommissionEmployee::toString() << "; base salary: " << getBaseSalary();
    return output.str();
}