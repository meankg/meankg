//
//  DatabaseTest.cpp
//  meankg
//
//  Created by user on 2017. 3. 2..
//  Copyright © 2017년 meankg. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Database.hpp"
using namespace std;
using namespace Records;
int main(){
    Database    myDB;
    Employee&   emp1 = myDB.addEmployee("Greg", "Wallis");
    emp1.fire();
    Employee&   emp2 = myDB.addEmployee("Scott", "Kleper");
    emp2.setSalary(100000);
    Employee&   emp3 = myDB.addEmployee("Nick", "Solter");
    emp3.setSalary(10000);
    emp3.promote();
    cout << "all employees: " << endl;
    cout << endl;
    myDB.displayAll();
    cout << endl;
    cout << "current employees: " << endl;
    cout << endl;
    myDB.displayCurrent();
    cout << "former employees: " << endl;
    cout << endl;
    myDB.displayFormer();
    return 0;
}
