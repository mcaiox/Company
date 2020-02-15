//
//  Employee.hpp
//  Company
//
//  Created by chin on 14/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <string>
#include "EmployeeBase.hpp"

using namespace std;

class Employee : public EmployeeBase{
public:
    Employee(const std::string &, const std::string &, const std::string &, double=0.0, double = 0.0);
    virtual ~Employee() {} //virtual destructor
    
    void setGrossSales(double);
    double getGrossSales() const;
    
    void setCommissionRate(double); // set commission rate (percentage)
    double getCommissionRate() const;
    
    virtual double earnings() const override; // intend to override
    virtual void print() const override; // intend to override
    
private:
    double grossSales; // gross sales
    double commissionRate; // commission percentage
};

#endif /* Employee_hpp */
