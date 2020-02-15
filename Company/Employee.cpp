//
//  Employee.cpp
//  Company
//
//  Created by chin on 14/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#include "Employee.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

Employee::Employee(const string &first, const string &last, const string &id, double sales, double rate) : EmployeeBase(first, last, id) {
setGrossSales(sales); // validate and store gross sales
setCommissionRate(rate); // validate and store commission rate
}

void Employee::setGrossSales(double sales) {
    if (sales >= 0.0)
        grossSales = sales;
    else
        throw invalid_argument("Gross sales must be >= 0.0");
}

double Employee::getGrossSales() const {return grossSales;}

void Employee::setCommissionRate(double rate) {
if (rate > 0.0 && rate < 1.0)
commissionRate = rate;
else
throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
}
double Employee::getCommissionRate() const {return commissionRate;}
double Employee::earnings() const {
return getCommissionRate() * getGrossSales();
}
void Employee::print() const {
cout << "Employee: ";
EmployeeBase::print(); //reuse base class print
cout << "\ngross sales: " << getGrossSales() << " commission rate: "
<< getCommissionRate();
}
