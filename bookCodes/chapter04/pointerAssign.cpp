//
// Created by Twinkle on 2024/8/4.
//
#include <iostream>
using namespace std;
int main()
{
    int *pt = new int;
    delete pt;
    cout << *pt << endl;
    pt = nullptr;
    cout << pt << endl;
    return 0;
}