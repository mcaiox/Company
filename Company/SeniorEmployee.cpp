//
//  SeniorEmployee.cpp
//  Company
//
//  Created by chin on 14/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#include "SeniorEmployee.hpp"
#include <string>
#include "Employee.hpp"
class SeniorEmployee: public Employee {
public:
SeniorEmployee(const std::string &, const std::string &,
const std::string &, double = 0.0, double = 0.0, double = 0.0);
virtual ~SeniorEmployee() {
} //virtual destructor
void setBaseSalary(double); // set base salary
double getBaseSalary() const;
virtual double earnings() const override; // intend to override
virtual void print() const override; // intend to override
private:
double baseSalary; // base salary
};
