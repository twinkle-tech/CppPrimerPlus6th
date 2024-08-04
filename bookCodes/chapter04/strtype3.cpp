//
// Created by Twinkle on 2024/8/4.
//
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    char name[20];
    char name1[20] = "Jelly";
    string str1;
    string str2 = "helloworld";
    // 赋值
    strcpy(name, name1);
    str1 = str2;

    // appending
    strcat(name, "!!!");
    str1 += "!!!";

    return 0;
}