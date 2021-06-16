#ifndef SALARIED_H
#define SALARIED_H

#include <string> // C++ standard string class
#include "Walter_Mejia_Employee.h" // Employee class definition

class SalariedEmployee : public Employee {
   public:
      SalariedEmployee(const std::string&, const std::string&, const std::string&, int, double = 0.0);
      virtual ~SalariedEmployee() = default;

      void setWeeklySalary(double);
      double getWeeklySalary() const;

      virtual double earnings() const override;
      virtual std::string toString() const override;
   private:
      double weeklySalary;  
};

#endif // SALARIED_H