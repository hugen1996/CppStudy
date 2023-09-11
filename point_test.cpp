#include <iostream>


namespace first_space{
    void func() {
        std::cout << "hello" << std::endl;
    }
    namespace inner_first_space{
        void func() {
            std::cout << "world" << std::endl;
        }
    }
}

using namespace first_space;

int main()
{
    int *pint = nullptr;
    pint = new int(7);
    std::cout << *pint << std::endl;

    delete pint;

    // first_space::func();
    inner_first_space::func();

    return 0;
}
