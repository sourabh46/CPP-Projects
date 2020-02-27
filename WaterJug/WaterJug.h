#pragma once

/**< Declaration of WaterJug class with necessary variables and function prototypes */
class WaterJug
{
private:
    int capacity, amount;
public:
    /**< Constructor of WaterJug that takes two arguments to initialize capacity and amount */
    WaterJug(int capacity,int amount);

    /**< Function to fill the jug with input amount */
    void fillWater(int amount);

    /**< Function to reduce the amount of water from the jug */
    void drinkWater(int amount);

    /**< Function to break the jug */
    void breakJug();

    /**< Function to describe current status of jug and prompts user to do some action */
    void describeJug();
};
