//
//  Database.cpp
//  meankg
//
//  Created by user on 2017. 3. 1..
//  Copyright © 2017년 meankg. All rights reserved.
/////

#include "Database.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;
namespace Records {
    Database::Database()
    {
        mNextEmployeeNumber = kFirstEmployeeNumber;
    }
    Database::~Database()
    {
        
    }
    Employee& Database::addEmployee(string inFirstName, string inLastName){
        Employee theEmployee;
        theEmployee.setFirstName(inFirstName);
        theEmployee.setLastName(inLastName);
        theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
        theEmployee.hire();
        mEmployees.push_back(theEmployee);
        return mEmployees[mEmployees.size()-1];
    }
    Employee& Database::getEmployee(int inEmployeeNumber){
        for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter){
            if (iter->getEmployeeNumber() == inEmployeeNumber) return *iter;
        }
        cerr << "No employee with number " << inEmployeeNumber << endl;
        throw exception();
    }
    Employee& Database::getEmployee(string inFirstName, string inLastName){
        for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter){
            if (iter->getFirstName() == inFirstName && iter->getLastName() == inLastName) return *iter;
        }
        cerr << "No employee with Name " << inFirstName << inLastName << endl;
        throw exception();
    }
    void Database::displayAll() const{
        for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter){
            iter->display();
        }
    }
    void Database::displayCurrent() const{
        for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter){
           if (iter->getIsHired())
               iter->display();
        }
    }
    void Database::displayFormer() const{
        for (auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter){
            if (!iter->getIsHired())
                iter->display();
        }
    }
}
