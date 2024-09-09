#include <iostream>
#include <vector>
#include <memory>

class Data
{
public:
    Data() { std::cout << "Data acquired\n"; }
    ~Data() { std::cout << "Data released\n"; }
    void process() { std::cout << "Processing data\n"; }
};

int main()
{
    std::vector<std::unique_ptr<Data>> dataList;

    // Thêm các đối tượng vào vector
    dataList.push_back(std::make_unique<Data>());
    dataList.push_back(std::make_unique<Data>());

    // Sử dụng các đối tượng
    for (auto &data : dataList)
    {
        data->process();
    }

    // Các đối tượng sẽ tự động được giải phóng khi vector ra khỏi scope
    return 0;
}
