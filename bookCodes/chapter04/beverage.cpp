//
// Created by Twinkle on 2024/7/31.
//

#include <iostream>
using namespace std;
class Component{
public:
    string name;
    int cost;
    int saleCount;
};

class Beverage{
    Component &component;
};

class Milk{
    Component component;
};

class Tea{
    Component* component;
};

int main()
{
    cout << sizeof(Beverage) << endl;
    cout << sizeof(Milk) << endl;
    cout << sizeof(Tea) << endl;
    Component* component = new Component;
    Component& component1 = *component;
    cout << "sizeof(*)" << sizeof(component) << endl;
    cout << "sizeof(&)" << sizeof(component1) << endl;
    component1.name = "hello";
    cout << component->name << endl;
    return 0;
}
