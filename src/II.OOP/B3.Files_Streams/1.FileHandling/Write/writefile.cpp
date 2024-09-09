#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outputFile("example.txt");

    if (!outputFile)
    {
        std::cerr << "Unable to open file";
        return 1; // Return with error code
    }

    outputFile << "This is a line." << std::endl;
    outputFile << "This is another line." << std::endl;

    outputFile.close(); // Đóng tệp tin sau khi ghi xong
    return 0;
}
