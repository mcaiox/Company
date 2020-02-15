//
//  EmployeeBase.hpp
//  Company
//
//  Created by chin on 14/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#ifndef EmployeeBase_hpp
#define EmployeeBase_hpp

#include <string>

class EmployeeBase{
public:
    EmployeeBase(const std::string &, const std::string &, const std::string &);
    virtual ~EmployeeBase() {} //virtual destructor
    
    void setFirstName(const std::string &);
    std::string getFirstName() const;
    
    void setLastName(const std::string &);
    std::string getLastName() const;
    
    void setEmployeeBaseID(const std::string &);
    std::string getEmployeeBaseID() const;
    
    virtual double earnings() const = 0; // pure virtual
    virtual void print() const; // virtual
private:
    std::string firstName;
    std::string lastName;
    std::string employeeID;
};

#endif /* EmployeeBase_hpp */
