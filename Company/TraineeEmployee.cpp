//
//  TraineeEmployee.cpp
//  Company
//
//  Created by chin on 14/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//


#include <iostream>
#include <stdexcept>
#include "TraineeEmployee.hpp"
using namespace std;

TraineeEmployee::TraineeEmployee(const string &first, const string &last, const string &id, double salary) :
EmployeeBase(first, last, id) {
setMonthlySalary(salary); // validate the monthly salary
}
void TraineeEmployee::setMonthlySalary(double salary) {
if (salary >= 0.0)
monthlySalary = salary;
else
throw invalid_argument("Monthly salary must be >=0.0");
}
double TraineeEmployee::getMonthlySalary() const{ return monthlySalary;}
double TraineeEmployee::earnings() const{ return getMonthlySalary();}
void TraineeEmployee::print() const {
cout << "Trainee employee: ";
EmployeeBase::print(); //reuse base class print
cout << "\nmonthly salary: " << getMonthlySalary();
}
