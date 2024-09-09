Trong C++, std::list là một container trong thư viện chuẩn STL (Standard Template Library) đại diện cho danh sách liên kết đôi (doubly linked list). std::list cung cấp một cấu trúc dữ liệu với các thao tác chèn, xóa, và truy cập phần tử hiệu quả, đặc biệt khi cần chèn hoặc xóa các phần tử ở giữa container.

#### Đặc điểm của std::list:

Kích thước động: Kích thước của std::list có thể thay đổi khi cần thiết, phần tử có thể được thêm hoặc xóa.
Truy cập tuần tự: Truy cập phần tử trong std::list phải duyệt qua từng node, thời gian truy cập là O(n).
Chèn/Xóa: Việc chèn/xóa phần tử ở giữa std::list không tốn kém như mảng vì chỉ cần thay đổi các con trỏ, thời gian thực hiện là O(1).
Liên kết đôi: std::list sử dụng danh sách liên kết đôi, do đó mỗi node trong danh sách chứa con trỏ đến node trước và node sau.

#### Các phương thức cơ bản của std::list:

push_back(): Thêm phần tử vào cuối danh sách.
push_front(): Thêm phần tử vào đầu danh sách.
pop_back(): Xóa phần tử ở cuối danh sách.
pop_front(): Xóa phần tử ở đầu danh sách.
insert(): Chèn phần tử vào vị trí xác định trong danh sách.
erase(): Xóa phần tử tại vị trí xác định trong danh sách.
size(): Trả về số lượng phần tử trong danh sách.
empty(): Kiểm tra xem danh sách có rỗng hay không.
clear(): Xóa tất cả các phần tử trong danh sách.
begin(): Trả về iterator trỏ đến phần tử đầu tiên trong danh sách.
end(): Trả về iterator trỏ đến vị trí sau phần tử cuối cùng trong danh sách.

### Sử dụng std::list khi:

Cần chèn hoặc xóa các phần tử thường xuyên, đặc biệt là ở đầu hoặc giữa danh sách.
Kích thước của container thay đổi liên tục.
Không yêu cầu truy cập ngẫu nhiên các phần tử.
