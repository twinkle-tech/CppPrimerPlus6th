//
// Created by Twinkle on 2024/7/28.
//
#include <iostream>
void simon(int n); // function prototype for simon()，函数原型

int main()
{
    using namespace std;
    simon(3); // call the simon() function，函数调用，C++中函数调用必须要有()
    cout << "Pick an integer ";
    int count;
    cin >> count;
    simon(count);
    return 0;
}

// define the simon() function
void simon(int n) {
    using namespace std;
    cout << "Simon says he touch your toes " << n << " times." << endl;
}