#pragma once
#include "Worker.h"

/**< Implementation of Supervisor class (grandchild) that inherits Worker class (child) */
class Supervisor: public Worker
{
private:
    int bonus;
public:
    /**< Constructor of Supervisor class takes char[] name, int hours, int rate, int bonus as arguments */
    Supervisor(char name[],int hours,int rate,int bonus): Worker(name,hours,rate)
    {
        this->bonus=bonus;
    }
    /**< Sets supervisor salary using grandparent class method */
    void calculateSalary()
    {
        setSalary(bonus+getSalary());
    }
};
