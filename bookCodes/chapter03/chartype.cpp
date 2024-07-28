//
// Created by Twinkle on 2024/7/28.
//
#include <cmath>
/*
 * 对于char类型，输入为字符，输出也为字符，这是cin和cout完成的转换工作，但是内部保存的值是对应的ascii码
 * char   ascii
 * '0'      48
 * 'A'      65
 * 'a'      97
 * */
#include <iostream>
using namespace std;
int main()
{
    uint8_t ch;
    cout << "enter a character" << endl;
    cin >> ch; // 这里输入M
    switch(ch) {
        case (48):
            cout << "'0'" << endl;
            break;
        case('M'):
            cout << "'M'" << endl;
            break ;
        default:
            break;
    }
    int asciiCh = ch; // asciiCh保存的是ch的ascii码
    cout << "Thank you for the " << ch << " character." << endl; //Thank you for the M character.
    cout << "The corresponding ascii code is " << asciiCh << endl;
    return 0;
}