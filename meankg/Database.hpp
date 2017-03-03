//
//  Database.hpp
//  meankg
//
//  Created by user on 2017. 3. 1..
//  Copyright © 2017년 meankg. All rights reserved.
//

#ifndef Database_hpp
#define Database_hpp

#include <stdio.h>
#include <vector>
#include "Employee.hpp"
namespace Records{
    const int kFirstEmployeeNumber = 1000;
    
    class Database
    {
    public:
        Database();
        ~Database();
        Employee& addEmployee( std::string inFirstName, std::string inLastName);
        Employee& getEmployee(int inEmployeeNumber);
        Employee& getEmployee( std::string inFirstName, std::string inLastName);
        
        void displayAll() const;
        void displayCurrent() const;
        void displayFormer() const;
    protected:
        std::vector<Employee> mEmployees;
        int mNextEmployeeNumber;
        
    };
}

#endif /* Database_hpp */
