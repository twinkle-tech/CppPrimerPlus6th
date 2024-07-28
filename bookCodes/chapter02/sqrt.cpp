//
// Created by Twinkle on 2024/7/28.
//
#include <iostream>
#include <cmath>
#include "limits.h"
extern int index;

int main()
{
    using namespace std;
    double area;
    cout << "Enter the floor area, in square feet, of you home: ";
    cin >> area;
    double side = sqrt(area);
    cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
    cout << "index = " << index << endl;
    return 0;
}
