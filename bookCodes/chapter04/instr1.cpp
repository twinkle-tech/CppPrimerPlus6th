//
// Created by Twinkle on 2024/8/4.
//
#include <iostream>
using namespace std;
int main()
{
    const int arSize = 20;
    char name[arSize];
    char dessert[arSize];

    cout << "Enter your name: \n";
    cin >> name;
    cout << "Enter your favorate dessert: \n";
    cin >> dessert;
    cout << "I have some delicious " << dessert << " for you , " << name << endl;
    return 0;
}
