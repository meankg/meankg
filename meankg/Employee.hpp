//
//  Employee.hpp
//  meankg
//
//  Created by user on 2017. 3. 1..
//  Copyright © 2017년 meankg. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>
namespace Records {
    
    const int kDefaultStartingSalary  = 30000;

    class Employee
    {
    public:
        Employee();
        void promote( int inRaiseAmount = 1000);
        void demote( int inDemoritAmount = 1000);
        void hire();
        void fire();
        void display() const;
        
        void setFirstName(std::string inFirstName);
        std::string getFirstName() const;
        void setLastName(std::string inLastName);
        std::string getLastName() const;
        void setEmployeeNumber( int inEmployeeNumber);
        int getEmployeeNumber() const;
        void setSalary( int inNewSalary);
        int getSalary() const;
        bool getIsHired() const;
    
    protected:
        std::string mFirstName;
        std::string mLastName;
        int mEmployeeNumber;
        int mSalary;
        bool bHired;
    };
}

#endif /* Empoloyee_hpp */
