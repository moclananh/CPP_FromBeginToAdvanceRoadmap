Trong C++, hàm ảo (virtual function) là một hàm thành viên trong một lớp cơ sở mà bạn mong muốn được định nghĩa lại trong các lớp dẫn xuất. Khi bạn sử dụng một con trỏ hoặc tham chiếu tới lớp cơ sở để gọi một hàm ảo, phiên bản của hàm được gọi sẽ là phiên bản trong lớp dẫn xuất. Điều này cho phép hành vi động (dynamic behavior) và được gọi là đa hình (polymorphism).

Cú Pháp và Sử Dụng Hàm Ảo
Hàm ảo được khai báo bằng cách sử dụng từ khóa virtual trong lớp cơ sở.
