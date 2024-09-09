Dynamic binding (hay còn gọi là late binding) là một khái niệm trong lập trình hướng đối tượng (OOP) đề cập đến việc gọi phương thức (method) dựa trên kiểu thực tế của đối tượng tại thời điểm chạy (runtime), thay vì kiểu của biến đối tượng tại thời điểm biên dịch (compile-time).

Khái niệm
Trong C++ và các ngôn ngữ hướng đối tượng khác, khi một phương thức được gọi trên một đối tượng, hành vi của phương thức được xác định bởi kiểu thực tế của đối tượng mà biến đó tham chiếu đến tại thời điểm chạy. Điều này có nghĩa là:

Biến tham chiếu hoặc con trỏ đến đối tượng có thể được khai báo với kiểu của lớp cơ sở (base class), trong khi thực tế thì đối tượng mà nó trỏ đến có thể là của một lớp dẫn xuất (derived class).
Phương thức được gọi trên biến này sẽ dựa vào kiểu thực tế của đối tượng được trỏ tới, và sẽ gọi phương thức phù hợp với lớp dẫn xuất thay vì phương thức của lớp cơ sở.
