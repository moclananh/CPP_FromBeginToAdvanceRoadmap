#include <iostream>
#include <fstream>
#include <string>

void writeFile()
{
    std::ofstream outputFile("text.txt");
    if (!outputFile)
    {
        std::cerr << "Unable to open file for writing";
        return;
    }

    outputFile << "This is the first line." << std::endl;
    outputFile << "This is the second line." << std::endl;

    outputFile.close();
}

void appendFile()
{
    std::ofstream outputFile("text.txt", std::ios::app);
    if (!outputFile)
    {
        std::cerr << "Unable to open file for appending";
        return;
    }

    outputFile << "Appending a new line." << std::endl;

    outputFile.close();
}

void readFile()
{
    std::ifstream inputFile("text.txt");
    if (!inputFile)
    {
        std::cerr << "Unable to open file for reading";
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        std::cout << line << std::endl;
    }

    inputFile.close();
}

int main()
{
    writeFile();  // Ghi vào tệp tin
    appendFile(); // Ghi thêm vào tệp tin
    readFile();   // Đọc từ tệp tin

    return 0;
}
