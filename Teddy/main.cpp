#include <iostream>
#include "Teddy.h"
using namespace std;

int main()
{
    Teddy teddy;
    char *name = "Tom";
    char *color = "Yellow";
    teddy.SetTeddy(name,12,color,30);
    teddy.Describe();
    teddy.SetTeddy(name,5,color,20);
    teddy.Describe();
    return 0;
}
