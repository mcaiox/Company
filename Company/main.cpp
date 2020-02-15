//
//  main.cpp
//  Company
//
//  Created by chin on 14/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.hpp"
#include "EmployeeBase.hpp"
#include "TraineeEmployee.hpp"
#include "SeniorEmployee.hpp"

using namespace std;

void virtualViaPointer(const EmployeeBase * baseClassPtr) {
    baseClassPtr->print();
    cout << "\nearned £" << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference(const EmployeeBase &baseClassRef) {
    baseClassRef.print();
    cout << "\nearned £" << baseClassRef.earnings() << "\n\n";
}

int main(int argc, const char * argv[])
{
    cout << fixed << setprecision(2); // set floating-point output formatting
    
    TraineeEmployee e1("Jane", "Hunter", "0303412", 800);
    Employee e2("Sue", "Jones", "0104357", 10000, .06);
    SeniorEmployee e3("John", "Smith", "0001210", 5000, .04, 300);
    
    vector<EmployeeBase *> employees(3);
    employees[0] = &e1;
    employees[1] = &e2;
    employees[2] = &e3;
    
    for (const EmployeeBase *employeeBasePtr : employees)
        virtualViaPointer(employeeBasePtr);
    
    for (const EmployeeBase *employeeBasePtr : employees)
        virtualViaReference(*employeeBasePtr);
    
    return 0;
}


     
 
    
    

