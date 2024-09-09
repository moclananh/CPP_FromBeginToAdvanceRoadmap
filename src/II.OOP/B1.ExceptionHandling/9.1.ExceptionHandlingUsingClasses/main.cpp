#include <iostream>
#include <exception>
#include <string>

// Lớp ngoại lệ tùy chỉnh cơ bản
class MyException : public std::exception
{
protected:
    std::string message;

public:
    MyException(const std::string &msg) : message(msg) {}
    virtual const char *what() const noexcept override
    {
        return message.c_str();
    }
};

// Lớp ngoại lệ tùy chỉnh cho lỗi không tìm thấy tập tin
class FileNotFoundException : public MyException
{
public:
    FileNotFoundException(const std::string &msg) : MyException("File Not Found: " + msg) {}
};

// Lớp ngoại lệ tùy chỉnh cho lỗi chia cho số 0
class DivideByZeroException : public MyException
{
public:
    DivideByZeroException() : MyException("Divide by Zero Error") {}
};
int main()
{
    try
    {
        // Giả lập lỗi không tìm thấy tập tin
        bool fileExists = false; // Giả sử tập tin không tồn tại
        if (!fileExists)
        {
            throw FileNotFoundException("data.txt");
        }

        // Giả lập lỗi chia cho số 0
        int divisor = 0;
        if (divisor == 0)
        {
            throw DivideByZeroException();
        }
    }
    catch (const FileNotFoundException &e)
    {
        std::cerr << "Caught FileNotFoundException: " << e.what() << std::endl;
    }
    catch (const DivideByZeroException &e)
    {
        std::cerr << "Caught DivideByZeroException: " << e.what() << std::endl;
    }
    catch (const MyException &e)
    {
        std::cerr << "Caught MyException: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught std::exception: " << e.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "Caught an unknown exception." << std::endl;
    }

    return 0;
}
