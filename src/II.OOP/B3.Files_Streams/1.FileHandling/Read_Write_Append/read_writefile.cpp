#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream file("example.txt", std::ios::in | std::ios::out | std::ios::app);
    //in: read | out: write | app: (append) chen them
    if (!file)
    {
        std::cerr << "Unable to open file";
        return 1; // Return with error code
    }

    // Ghi vào cuối tệp tin (append)
    file << "Appending a new line." << std::endl;

    // Đặt lại con trỏ đọc/ghi về đầu tệp tin để đọc
    file.seekg(0, std::ios::beg);

    std::string line;
    while (std::getline(file, line))
    {
        std::cout << line << std::endl;
    }

    file.close(); // Đóng tệp tin sau khi hoàn tất
    return 0;
}
