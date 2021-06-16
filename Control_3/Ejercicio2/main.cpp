#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Walter_Mejia_Employee.h"
#include "Walter_Mejia_SalariedEmployee.h"
#include "Walter_Mejia_CommissionEmployee.h"
#include "Walter_Mejia_BasePlusCommissionEmployee.h"
using namespace std;

int main() {
    cout << fixed << setprecision(2);

    vector <Employee*> employees{
        new SalariedEmployee("John", "Smith", "111-11-1111",21, 800),
        new CommissionEmployee("Sue", "Jones", "333-33-3333",70, 10000, 0.6),
        new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444",50, 5000, .04, 300)
    };

    
    for(Employee* employeePtr : employees) {
        cout << employeePtr->toString() << endl;
        BasePlusCommissionEmployee* derivedPtr = dynamic_cast<BasePlusCommissionEmployee*>(employeePtr);
        if(derivedPtr != nullptr) {
            double oldBaseSalary = derivedPtr->getBaseSalary();
            cout << "old base salary: $" << oldBaseSalary << endl;
            derivedPtr->setBaseSalary(1.10 * oldBaseSalary);
            cout << "new base salary with 10% increase us: $" << derivedPtr->getBaseSalary() << endl;
        }
        cout << "earned $" << employeePtr->earnings() << "\n";
        
        if(employeePtr->getAge() >= 50){
            cout << "Since his age is: " << employeePtr->getAge() << ", his salary will be 20% more than before" << endl;
            cout << "New Salary with 20% more: "<< (employeePtr->earnings()*1.2) << endl;
        }
        cout << endl;
    }

    for(const Employee* employeePtr : employees) {
        cout << "deleting object of " << typeid(*employeePtr).name() << endl;
        delete employeePtr;
    }
} 