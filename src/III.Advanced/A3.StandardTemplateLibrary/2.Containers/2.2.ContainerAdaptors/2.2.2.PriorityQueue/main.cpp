#include <iostream>
#include <queue> // Include thư viện queue để sử dụng priority_queue

int main()
{
    // Khai báo priority_queue lưu trữ số nguyên (mặc định là max heap)
    std::priority_queue<int> pq_max;

    // Thêm các phần tử vào priority_queue
    pq_max.push(30);
    pq_max.push(10);
    pq_max.push(50);
    pq_max.push(20);

    // Truy cập và in các phần tử của priority_queue
    while (!pq_max.empty())
    {
        std::cout << pq_max.top() << " "; // Lấy phần tử có ưu tiên cao nhất
        pq_max.pop();                     // Xóa phần tử có ưu tiên cao nhất
    }
    std::cout << std::endl;

    // Khai báo priority_queue lưu trữ số nguyên (min heap)
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq_min;

    // Thêm các phần tử vào priority_queue
    pq_min.push(30);
    pq_min.push(10);
    pq_min.push(50);
    pq_min.push(20);

    // Truy cập và in các phần tử của priority_queue
    while (!pq_min.empty())
    {
        std::cout << pq_min.top() << " "; // Lấy phần tử có ưu tiên nhỏ nhất
        pq_min.pop();                     // Xóa phần tử có ưu tiên nhỏ nhất
    }
    std::cout << std::endl;

    return 0;
}
