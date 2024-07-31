//
// Created by Twinkle on 2024/7/28.
// 程序演示基本类型的上限和下限
//
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    short myShort = 1;
    cout << "sizeof(short): " << sizeof(myShort) << endl;
    int intMax = INT_MAX;
    cout << "int max: " << intMax << endl;
    cout << "sizeof(int): " << sizeof(intMax) << endl;
    char charMax = CHAR_MAX;
    cout << "char max:" << charMax << endl;
    cout << "sizeof(char)" << sizeof(charMax) << endl;
    char charMin = -111;
    cout << "char min:" << charMin << endl;
    long longMax = LONG_MAX;
    cout << "sizeof(long)" << sizeof(longMax) << endl;
    return 0;
}


