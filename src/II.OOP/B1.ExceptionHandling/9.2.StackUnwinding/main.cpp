#include <iostream>
#include <stdexcept>

class Test
{
public:
    Test(const std::string &name) : name(name)
    {
        std::cout << "Constructing " << name << std::endl;
    }

    ~Test()
    {
        std::cout << "Destructing " << name << std::endl;
    }

private:
    std::string name;
};

void functionC()
{
    Test c("C");
    throw std::runtime_error("Exception in functionC");
}

void functionB()
{
    Test b("B");
    functionC();
}

void functionA()
{
    Test a("A");
    functionB();
}

int main()
{
    try
    {
        functionA();
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
