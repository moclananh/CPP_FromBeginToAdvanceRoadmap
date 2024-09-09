#include <iostream>
#include <memory>

class SharedResource
{
public:
    SharedResource() { std::cout << "SharedResource acquired\n"; }
    ~SharedResource() { std::cout << "SharedResource released\n"; }
    void use() { std::cout << "Using shared resource\n"; }
};

void function1(std::shared_ptr<SharedResource> res)
{
    res->use();
    std::cout << "function1: Reference count = " << res.use_count() << std::endl;
}

void function2(std::shared_ptr<SharedResource> res)
{
    res->use();
    std::cout << "function2: Reference count = " << res.use_count() << std::endl;
}

int main()
{
    std::shared_ptr<SharedResource> resource = std::make_shared<SharedResource>();
    function1(resource);
    function2(resource);
    std::cout << "main: Reference count = " << resource.use_count() << std::endl;
    // Khi resource ra khỏi scope, SharedResource sẽ tự động được giải phóng
    return 0;
}
