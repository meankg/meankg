//
//  Employee.cpp
//  meankg
//
//  Created by user on 2017. 3. 1..
//  Copyright © 2017년 meankg. All rights reserved.
//
#include <iostream>
#include "Employee.hpp"

using namespace std;
namespace Records {
    Employee::Employee()
    : mFirstName("")
    , mLastName("")
    , mEmployeeNumber(-1)
    , mSalary(kDefaultStartingSalary)
    , bHired(false)
    {
    }

    void Employee::promote(int inRaiseAmount){
        setSalary(getSalary() + inRaiseAmount);
    }
    void Employee::demote(int inDemeritAmount){
        setSalary(getSalary() - inDemeritAmount);
    }
    void Employee::hire(){
        bHired = true;
    }
    void Employee::fire(){
        bHired = false;
    }
    void Employee::display() const
    {
        cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
        cout << "----------------------------"  << endl;
        cout << (bHired ? "Current Employee" : "former Employee") << endl;
        cout << "Employee Number: " << getEmployeeNumber() << endl;
        cout << "Salary: $" << getSalary() << endl;
        cout << endl;
    }
    void Employee::setFirstName(string inFirstName)
    {
        mFirstName = inFirstName;
    }
    string Employee::getFirstName() const
    {
        return mFirstName;
    }
    void Employee::setLastName(string inLastName)
    {
        mLastName = inLastName;
    }
    std::string Employee::getLastName() const
    {
        return mLastName;
    }
    void Employee::setEmployeeNumber( int inEmployeeNumber)
    {
        mEmployeeNumber = inEmployeeNumber;
    }
    int Employee::getEmployeeNumber() const
    {
        return mEmployeeNumber;
    }
    void Employee::setSalary( int inNewSalary){
        mSalary = inNewSalary;
    }
    int Employee::getSalary() const{
        return mSalary;
    }
    bool Employee::getIsHired() const{
        return bHired;
    }
    int main(){
        cout << "Testing the Employee class." << endl;
        Employee emp;
        emp.setFirstName("Marni");
        emp.setLastName("Kleper");
        emp.setEmployeeNumber(71);
        emp.setSalary(50000);
        emp.promote();
        emp.promote(50);
        emp.hire();
        emp.display();
        return 0;
    }
}
