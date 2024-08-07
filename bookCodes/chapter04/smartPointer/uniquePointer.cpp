//
// Created by Twinkle on 2024/8/7.
//
#include <iostream>
#include "Cat.h"
#include <memory>
int main()
{
    // 通过创建裸指针来创建unique_ptr，
//    Cat *cat1 = new Cat("aaa");
//    unique_ptr<Cat> uCat1{cat1};
//    cat1->printCatInfo();
//    uCat1->printCatInfo();
//
////    delete cat1;
//    cat1 = nullptr; // 不然cat1是个悬空指针
//    uCat1->printCatInfo();

    // new
//    unique_ptr<Cat> uCat2{new Cat("bbb")};
//    uCat2->printCatInfo();


    // make_unique
//    unique_ptr<Cat> uCat3 = make_unique<Cat>();
//    uCat3->printCatInfo();
//    uCat3->setCatName("vvv");
//    uCat3->printCatInfo();

    // get能够拿到独占指针所指向的地址值
    unique_ptr<int> uInt = make_unique<int>();
    cout << uInt.get() << endl;

    int *p = new int(100);
    cout << *p << endl;
    cout << p << endl;
    cout << &p << endl;
    return 0;
}
