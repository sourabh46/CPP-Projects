#pragma once
#include "Employee.h"

/**< Implementation of Worker class (child) that inherits Employee class (parent) */
class Worker: public Employee
{
private:
    int hours,ratePerHour;
public:
    /**< Constructor of Worker class takes char[] name, int hours, int rate as arguments */
    Worker(char name[],int hours,int rate): Employee(name)
    {
        this->hours=hours;
        this->ratePerHour=rate;
    }
    /**< Sets worker salary using parent class method */
    void calculateSalary()
    {
        setSalary(hours*ratePerHour);
    }
};
