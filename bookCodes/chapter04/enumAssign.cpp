//
// Created by Twinkle on 2024/8/4.
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    enum spectrum{
        RED, ORANGE, BLUE, GREEN, YELLOW, GRAY
    };
    spectrum color = RED;
    int colorInt = RED + GREEN; // tricky，没有任何含义
    spectrum colorNew = (spectrum) 1;
    return 0;
}