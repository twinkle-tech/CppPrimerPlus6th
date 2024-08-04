//
// Created by Twinkle on 2024/8/4.
//
#include <cstring>
int main()
{
    // 方法1，挨个元素进行初始化
    int yams[3];
    yams[0] = 10;
    yams[1] = 20;
    yams[2] = 30;

    // 方法2，初始化列表
    int yamCosts[3] = {10, 20, 30};
    // 如下初始化列表的方式进行初始化，表示将所有元素都设置为零
    int yamCostsNew[3] = {};

    // 如果不写元素的个数也是可以的，编译器自己计算元素个数，但是这种方法很不可靠!
    int cupCosts[] = {10, 20, 30};
    int cupNum = sizeof(cupCosts) / sizeof(int);

    // 此外，不能将一个数组赋值给另外一个数组
    int yams1[3];
//     yams1 = yams;  // 编译报错！
    return 0;
}
