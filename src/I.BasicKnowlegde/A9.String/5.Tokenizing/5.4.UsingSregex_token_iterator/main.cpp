#include <iostream>
#include <string>
#include <regex>
#include <vector>
// exp for tach chuoi
int main()
{
    // Chuỗi đầu vào
    std::string input = "This, is a sample, string with, commas.";

    // Biểu thức chính quy để tìm dấu cách và dấu phẩy
    std::regex re("[ ,]+");

    // Sử dụng sregex_token_iterator để tách chuỗi
    std::sregex_token_iterator it(input.begin(), input.end(), re, -1);
    std::sregex_token_iterator end;

    std::vector<std::string> tokens;

    while (it != end)
    {
        tokens.push_back(*it);
        ++it;
    }

    // In các token
    for (const auto &token : tokens)
    {
        std::cout << token << std::endl;
    }

    return 0;
}
