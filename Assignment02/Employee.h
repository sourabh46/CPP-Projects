#pragma once
#include<string.h>
#include<iostream>

/**< Implementation of Employee class (parent) */
class Employee
{
private:
    char name[32];
    int salary;
public:
    /**< Constructor of Employee class takes char[] name as argument */
    Employee(char name[])
    {
        strcpy(this->name,name);
        this->salary=0;
    }
    /**< Prints employee name and salary */
    void describeEmployee()
    {
        std::cout<<name<<"  "<<salary<<std::endl;
    }
    /**< Sets employee salary */
    void setSalary(int salary)
    {
        this->salary=salary;
    }
    /**< Returns employee salary */
    int getSalary()
    {
        return salary;
    }
};
