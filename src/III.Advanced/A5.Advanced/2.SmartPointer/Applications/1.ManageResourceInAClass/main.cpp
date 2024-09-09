#include <iostream>
#include <memory>

class Resource
{
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource released\n"; }
    void use() { std::cout << "Using resource\n"; }
};

class ResourceManager
{
private:
    std::unique_ptr<Resource> resource;

public:
    ResourceManager() : resource(std::make_unique<Resource>()) {}
    void useResource() { resource->use(); }
};

int main()
{
    ResourceManager manager;
    manager.useResource();
    // Khi manager ra khỏi scope, resource sẽ tự động được giải phóng
    return 0;
}
