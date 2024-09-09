#include <iostream>
#include <string>

class Student
{
private:
    std::string name;
    int age;

public:
    // Constructor
    Student(std::string studentName, int studentAge)
    {
        name = studentName;
        age = studentAge;
    }

    // Hàm thành viên để hiển thị thông tin sinh viên
    void display()
    {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    // Getter và Setter cho tên
    std::string getName()
    {
        return name;
    }

    void setName(std::string studentName)
    {
        name = studentName;
    }

    // Getter và Setter cho tuổi
    int getAge()
    {
        return age;
    }

    void setAge(int studentAge)
    {
        age = studentAge;
    }
};

int main()
{
    // Tạo đối tượng Student
    Student student1("John Doe", 20);
    Student student2("Jane Smith", 22);

    // Hiển thị thông tin sinh viên
    student1.display();
    student2.display();

    // Sử dụng getter và setter
    student1.setName("John Smith");
    student1.setAge(21);

    // Hiển thị lại thông tin sinh viên
    student1.display();

    return 0;
}
