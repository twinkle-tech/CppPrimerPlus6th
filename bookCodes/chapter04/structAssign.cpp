//
// Created by Twinkle on 2024/8/4.
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    struct Room{
        string name;
        int size;
        float price;
    };
    Room room = {"My Room", 100, 2E10};
    // 结构体的赋值
    Room anotherRoom = room; // 为什么呢？
    cout << "room information: " << room.name << ", size: " << room.size << ", price: " << room.price << endl;
    cout << "anotherRoom information: " << anotherRoom.name << ", size: " << anotherRoom.size << ", price: " << anotherRoom.price << endl;

    // 同时定义结构和创建结构变量
    struct Perks{
        int keyNumber;
        char car[12];
    }mr_smith, ms_jones;

    // 甚至可以直接定义结构、创建结构变量、初始化结构变量
    struct Car{
        int keyNumber;
        char name[12];
    } myCar = {7, "Packard"};

    // 还可以声明没有名称的结构类型，方法是省略名称，并同时定义一种该类型的变量
    struct{
        int x;
        int y;
    } position;
    return 0;
}
