#include <iostream>
#include <map>
#include <string>

int main()
{
    // map lưu trữ cặp (std::string, int)
    std::map<std::string, int> m_str_int;
    m_str_int["One"] = 1;
    m_str_int["Two"] = 2;
    m_str_int["Three"] = 3;

    for (const auto &pair : m_str_int)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // map lưu trữ cặp (int, double)
    std::map<int, double> m_int_double;
    m_int_double[1] = 3.14;
    m_int_double[2] = 2.718;
    m_int_double[3] = 1.618;

    for (const auto &pair : m_int_double)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
