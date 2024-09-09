#include <iostream>
#include <memory>

class Node
{
public:
    std::shared_ptr<Node> next;
    std::weak_ptr<Node> prev; // sử dụng weak_ptr để tránh vòng tham chiếu

    ~Node() { std::cout << "Node destroyed\n"; }
};

int main()
{
    auto node1 = std::make_shared<Node>();
    auto node2 = std::make_shared<Node>();

    node1->next = node2;
    node2->prev = node1; // prev là weak_ptr, không tăng reference count

    std::cout << "Node1 use count: " << node1.use_count() << std::endl; // In ra: 1
    std::cout << "Node2 use count: " << node2.use_count() << std::endl; // In ra: 1

    return 0;
}
