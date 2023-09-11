#include <iostream>
#define PI 3+2
// C++ 宏的定义、使用 https://www.cnblogs.com/fnlingnzb-learner/p/6903966.html
// C++ sizeof 运算符


using namespace std;

int main(int argc, char const *argv[])
{
    cout << "hello world" << endl;
    cout << PI*PI << endl;
    std::cout << sizeof(PI) << std::endl;
    return 0;
}
