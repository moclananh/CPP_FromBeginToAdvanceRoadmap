#include <iostream>
#include <cstring>

struct Student
{
    char name[50];
    int scores[5];
};

int main()
{
    // Khai báo và khởi tạo một biến của cấu trúc Student
    Student student;

    // Gán giá trị cho tên sinh viên
    std::strcpy(student.name, "John Doe");

    // Gán giá trị cho mảng điểm số
    student.scores[0] = 85;
    student.scores[1] = 90;
    student.scores[2] = 78;
    student.scores[3] = 92;
    student.scores[4] = 88;

    // In thông tin sinh viên
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Scores: ";
    for (int i = 0; i < 5; ++i)
    {
        std::cout << student.scores[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
