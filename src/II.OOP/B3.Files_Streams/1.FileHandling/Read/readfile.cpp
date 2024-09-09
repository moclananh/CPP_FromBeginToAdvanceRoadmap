#include <iostream>
#include <fstream> //file stream lib -> if, of
#include <string>

int main()
{
    std::ifstream inputFile("example.txt");

    if (!inputFile)
    {
        std::cerr << "Unable to open file";
        return 1; // Return with error code
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        std::cout << line << std::endl;
    }

    inputFile.close(); // Đóng tệp tin sau khi đọc xong
    return 0;
}
