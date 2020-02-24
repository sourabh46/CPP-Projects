#include <iostream>
#include "WaterJug.h"

using namespace std;

int main()
{
    int capacity, amount;

    cout << "Enter capacity: ";
    cin >> capacity;

    cout << "Enter amount: ";
    cin >> amount;

    if(amount > capacity)
    {
        amount = capacity;
    }

    /**< Construct waterJug object with capacity and amount */
    WaterJug waterJug(capacity, amount);

    /**< Describe current status of waterJug object and prompt user to do some action */
    waterJug.describeJug();
    return 0;
}
