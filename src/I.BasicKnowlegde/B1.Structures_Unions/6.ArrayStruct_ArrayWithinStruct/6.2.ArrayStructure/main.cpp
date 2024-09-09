#include <iostream>
#include <cstring>

struct Student
{
    char name[50];
    int age;
};

int main()
{
    // Khai báo và khởi tạo một mảng của cấu trúc Student
    Student students[3];

    // Gán giá trị cho từng phần tử trong mảng
    std::strcpy(students[0].name, "Alice");
    students[0].age = 20;

    std::strcpy(students[1].name, "Bob");
    students[1].age = 22;

    std::strcpy(students[2].name, "Charlie");
    students[2].age = 19;

    // In thông tin của các sinh viên trong mảng
    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Student " << i + 1 << ": " << std::endl;
        std::cout << "Name: " << students[i].name << std::endl;
        std::cout << "Age: " << students[i].age << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
