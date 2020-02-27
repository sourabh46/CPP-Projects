#include<iostream>
#include "WaterJug.h"
using namespace std;

/**< Implementation of constructor of WaterJug class */
WaterJug::WaterJug(int capacity,int amount)
{
    if(amount > capacity)
    {
        this->capacity = capacity;
        this->amount = capacity;
    }
    else
    {
        this->capacity = capacity;
        this->amount = amount;
    }
}

/** \brief Function to fill the jug with input amount
 *
 * \param int amount - Amount of water to be filled in jug
 * \return void
 *
 */
void WaterJug::fillWater(int amount)
{
    if(amount > capacity)
    {
        cout << "You have filled " << capacity << " glass of water." << endl;
        this->amount = capacity;
    }
    else
    {
        if((this->amount + amount)>= capacity)
        {
            cout << "You have filled " << (capacity - this->amount) << " glass of water." << endl;
            this->amount = capacity;
        }
        else
        {
            cout << "You have filled " << amount <<" glass of water." << endl;
            this->amount += amount;
        }
    }
}

/** \brief Function to reduce the amount of water from the jug
 *
 * \param int amount - Amount of water to be reduced from jug
 * \return void
 *
 */
void WaterJug::drinkWater(int amount)
{
    if(amount >= this->amount)
    {
        cout << "The jug is empty.";
        cout << "You have drunk " << (this->amount) << " glass of water." << endl;
        this->amount = 0;
    }
    else
    {
        this->amount -= amount;
        cout<<"You have drunk " << amount << " glass of water."<<endl;
    }
}

/**< Implementation of function to break the jug */
void WaterJug::breakJug()
{
    cout << "You have broken the jug." << endl;
}

/**< Implementation of function to describe current status of jug and prompts user to do some action */
void WaterJug::describeJug()
{
    while(1)
    {
        /**< Describe current status of jug */
        cout << "This jug contains " << amount << " glass of water." << endl;

        /**< Prompt user to do some action */
        cout << "What do you want to do?" << endl;
        cout << "Press 1 to fill up the jug." << endl;
        cout << "Press 2 to drink from the jug." <<endl;
        cout << "Press 3 to break the jug." << endl;
        cout << "Press 4 to quit." << endl;

        bool quitFlag = false;
        char choice;
        int amount;
        cin >> choice;

        switch(choice)
        {
            case '1':
            {
                cout << "How much glass of water you want to fill the jug? ";
                cin >> amount;
                this->fillWater(amount);
                break;
            }
            case '2':
            {
                cout << "How much glass of water you want to drink from the jug? ";
                cin >> amount;
                this->drinkWater(amount);
                break;
            }
            case '3':
            {
                this->breakJug();
                exit(1);
            }
            case '4':
            {
                quitFlag = true;
                break;
            }
            default:
            {
                cout << "You have pressed wrong key!!! Please try Again." << endl;
                continue;
            }
        }
        if(quitFlag)
        {
            break;
        }
    }
}
