//
//  EmployeeBase.cpp
//  Company
//
//  Created by chin on 14/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//


#include <iostream>
#include "EmployeeBase.hpp"// EmployeeBase class definition
using namespace std;

EmployeeBase::EmployeeBase(const string &first, const string &last, const string &id) : firstName(first), lastName(last), employeeID(id) {
}

void EmployeeBase::setFirstName(const string &first)
{
    firstName = first;
}

string EmployeeBase::getFirstName() const
{
    return firstName;
    
}

void EmployeeBase::setLastName(const string &last)
{
    lastName = last;
    
}

string EmployeeBase::getLastName() const
{
    return lastName;
    
}

void EmployeeBase::setEmployeeBaseID(const string &id)
{
    employeeID = id;
}

string EmployeeBase::getEmployeeBaseID() const
{
    return employeeID;
    
}

/*print EmployeeBase's information, virtual*/
void EmployeeBase::print() const
{
    cout << getFirstName() << ' ' << getLastName()<< "\nemployee ID: " << getEmployeeBaseID();
}

