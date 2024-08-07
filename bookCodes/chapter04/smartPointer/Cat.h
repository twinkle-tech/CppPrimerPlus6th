//
// Created by Twinkle on 2024/8/7.
//

#ifndef CPPPRIMERPLUS6TH_CAT_H
#define CPPPRIMERPLUS6TH_CAT_H

#include <iostream>
#include <string>
using namespace std;
class Cat {
public:
    Cat(const string &name):name(name)
    {
        cout << "Construction of Cat : " << name << endl;
    }
    Cat() = default;
    ~Cat()
    {
        cout << "Destruction of Cat : " << name << endl;
    }

    void printCatInfo() const
    {
        cout << "cat info name: " << name << endl;
    }

    string getCatName() const
    {
        return name;
    }

    void setCatName(string name)
    {
        this->name = name;
    }

private:
    string name;
};


#endif//CPPPRIMERPLUS6TH_CAT_H
