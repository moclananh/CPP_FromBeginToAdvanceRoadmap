#include <iostream>
#include <string>

// Lớp Student đơn giản với encapsulation
class Student
{
private:
    std::string name;
    int age;
    float gpa;

public:
    // Constructor
    Student(std::string studentName, int studentAge, float studentGpa)
        : name(studentName), age(studentAge), gpa(studentGpa) {}

    // Phương thức public để in thông tin sinh viên
    void display()
    {
        std::cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << std::endl;
    }

    // Getter và Setter cho name (public methods)
    std::string getName() const
    { // Getter
        return name;
    }

    void setName(const std::string &studentName)
    { // Setter
        name = studentName;
    }

    // Getter và Setter cho age (public methods)
    int getAge() const
    { // Getter
        return age;
    }

    void setAge(int studentAge)
    { // Setter
        if (studentAge >= 18 && studentAge <= 30)
        {
            age = studentAge;
        }
        else
        {
            std::cout << "Invalid age range." << std::endl;
        }
    }

    // Getter và Setter cho gpa (public methods)
    float getGpa() const
    { // Getter
        return gpa;
    }

    void setGpa(float studentGpa)
    { // Setter
        if (studentGpa >= 0.0 && studentGpa <= 4.0)
        {
            gpa = studentGpa;
        }
        else
        {
            std::cout << "Invalid GPA range." << std::endl;
        }
    }
};

int main()
{
    // Tạo đối tượng của lớp Student
    Student student1("John Doe", 20, 3.5);

    // Sử dụng các phương thức để truy cập và thay đổi dữ liệu
    student1.display(); // In thông tin ban đầu

    student1.setName("Jane Smith"); // Thay đổi tên
    student1.setAge(22);            // Thay đổi tuổi
    student1.setGpa(3.8);           // Thay đổi GPA

    student1.display(); // In thông tin sau khi thay đổi

    return 0;
}
