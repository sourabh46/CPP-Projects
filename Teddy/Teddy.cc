#include<stdlib.h>
#include<iostream>
#include<cstring>
#include "Teddy.h"
using namespace std;

/** \brief SetTeddy - inputs name, age, color and energy of Teddy
 *
 * \param name char* name of Teddy
 * \param age int age of Teddy
 * \param color char* color of Teddy
 * \param energy int energy of Teddy
 * \return void
 *
 */
void Teddy::SetTeddy(char *name, int age, char *color, int energy)
{
    this->name = (char*)malloc(sizeof(char)*32);
    this->color = (char*)malloc(sizeof(char)*16);
    strcpy(this->name,name);
    this->age = age;
    strcpy(this->color,color);
    this->energy = energy;
}

/** \brief Eat - inputs food for Teddy
 *
 * \param n int food for Teddy
 * \return void
 *
 */
void Teddy::Eat(int n)
{
    if(n >=0 && n <=100)
    {
        energy = n*2;
    }
    else if(n > 100)
    {
        cout<<"This is too much for "<<name;
    }
    else
    {
        cout<<"This is not an amount to eat.";
    }
    return ;
}

/** \brief Sick - inputs energy-loss of Teddy
 *
 * \param n int energy-loss of Teddy
 * \return void
 *
 */
void Teddy::Sick(int n)
{
    if((energy-n) > 0)
    {
        energy = energy-n;
    }
    else
    {
        cout<<name<<"has died of sickness"<<endl;
    }
}

/** \brief Describe - no input, only prints information of Teddy
 *
 * \return void
 *
 */
void Teddy::Describe()
{
    if(energy <= 0)
    {
        return;
    }
    else
    {
        cout<<"I am "<<name<<endl;
        cout<<"My age is "<<age<<endl;
        cout<<"My energy is "<<energy<<" points."<<endl;
        cout<<"My color is " <<color <<endl;
    }
}
