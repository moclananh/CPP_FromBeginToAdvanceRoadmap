Stack unwinding là quá trình ngược lại của việc xây dựng stack khi một ngoại lệ được ném (thrown) trong C++. Khi một ngoại lệ được ném, C++ sẽ bắt đầu tìm kiếm một khối catch phù hợp để xử lý ngoại lệ. Trong quá trình này, nó sẽ hủy (destruct) các đối tượng được tạo ra trên stack của các hàm đã gọi nhưng không bắt được ngoại lệ, điều này được gọi là stack unwinding.

### Quá Trình Stack Unwinding

Ném Ngoại Lệ: Khi một ngoại lệ được ném, trình biên dịch sẽ tìm kiếm một khối catch để xử lý ngoại lệ đó.
Hủy Các Đối Tượng: Nếu không tìm thấy khối catch trong phạm vi hiện tại, trình biên dịch sẽ bắt đầu hủy các đối tượng được tạo ra trong các hàm đang gọi trước khi quay trở lại hàm gọi nó (quá trình unwinding).
Tiếp Tục Tìm Kiếm: Quá trình này tiếp tục cho đến khi tìm thấy một khối catch phù hợp hoặc không còn hàm nào trong ngăn xếp.
