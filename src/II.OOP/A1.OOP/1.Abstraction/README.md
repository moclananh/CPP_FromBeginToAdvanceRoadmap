Trừu tượng (Abstraction).Trong C++, trừu tượng giúp ẩn đi các chi tiết triển khai phức tạp và chỉ hiển thị những chi tiết cần thiết cho người dùng. Điều này giúp đơn giản hóa việc sử dụng các đối tượng và giảm sự phụ thuộc vào chi tiết cụ thể của việc triển khai.

Cách thực hiện trừu tượng trong C++
Trong C++, trừu tượng thường được thực hiện bằng cách sử dụng các lớp trừu tượng và các hàm ảo thuần túy.

Lớp trừu tượng
Lớp trừu tượng là lớp có ít nhất một hàm ảo thuần túy. Một hàm ảo thuần túy là hàm được khai báo bằng cách gán giá trị 0 cho nó trong định nghĩa của lớp. Bạn không thể tạo các đối tượng trực tiếp của lớp trừu tượng; thay vào đó, bạn phải kế thừa từ lớp này và định nghĩa các hàm ảo thuần túy trong lớp con.
