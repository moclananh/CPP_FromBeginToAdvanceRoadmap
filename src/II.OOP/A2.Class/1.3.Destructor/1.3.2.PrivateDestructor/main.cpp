// CPP program to illustrate
// Private Destructor
#include <iostream>

// A class with private destructor
class Test
{
private:
    ~Test() {}

public:
    friend void destructTest(Test *);
};

// Only this function can destruct objects of Test
void destructTest(Test *ptr)
{
    std::cout << "Destruc called!";
    delete ptr;
}

int main()
{
    // create an object
    Test *ptr = new Test;

    // destruct the object
    destructTest(ptr);

    return 0;
}
