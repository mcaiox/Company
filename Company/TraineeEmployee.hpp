//
//  TraineeEmployee.hpp
//  Company
//
//  Created by chin on 14/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#ifndef TraineeEmployee_hpp
#define TraineeEmployee_hpp

#include <string>
#include "EmployeeBase.hpp"
class TraineeEmployee : public EmployeeBase{
public:
TraineeEmployee(const std::string &, const std::string &, const std::string &,
double = 0.0);
virtual ~TraineeEmployee() {
} //virtual destructor
void setMonthlySalary(double);
double getMonthlySalary() const;
virtual double earnings() const override; // intend to override
virtual void print() const override; // intend to override
private:
double monthlySalary;
};

#endif /* TraineeEmployee_hpp */
