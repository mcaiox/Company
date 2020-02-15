//
//  SeniorEmployee.cpp
//  Company
//
//  Created by chin on 14/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#include <iostream>
#include <stdexcept>
#include "SeniorEmployee.hpp"

using namespace std;

SeniorEmployee::SeniorEmployee(const string &first, const string &last, const string &id, double sales, double rate, double salary) : Employee(first, last, id, sales, rate)
{
    setBaseSalary(salary); // validate and store base salary
}

void SeniorEmployee::setBaseSalary(double salary) {
    if (salary >= 0.0)
        baseSalary = salary;
    else
        throw invalid_argument("Salary must be >= 0.0");
}

double SeniorEmployee::getBaseSalary() const
{
    return baseSalary;
}

double SeniorEmployee::earnings() const
{
    return getBaseSalary() + Employee::earnings();
}

void SeniorEmployee::print() const
{
    cout << "Senior ";
    Employee::print(); //reuse Employee print
    cout << "\nbase salary: " << getBaseSalary();
}
