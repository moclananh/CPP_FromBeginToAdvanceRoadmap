std::map là một container trong thư viện chuẩn C++ (<map>) lưu trữ các cặp key-value và tự động sắp xếp chúng theo key. std::map sử dụng cây đỏ-đen để quản lý các phần tử, đảm bảo thời gian trung bình của các thao tác tìm kiếm, chèn và xóa là O(log n).

### Các phương thức trong std::map

operator[]: Truy cập hoặc thêm phần tử với key cho trước.
insert: Thêm một phần tử mới vào map.
erase: Xóa phần tử khỏi map.
find: Tìm kiếm một phần tử trong map. Trả về iterator trỏ đến phần tử nếu tìm thấy, hoặc end() nếu không tìm thấy.
begin: Trả về iterator trỏ đến phần tử đầu tiên trong map.
end: Trả về iterator trỏ đến vị trí sau phần tử cuối cùng trong map.
size: Trả về số lượng phần tử trong map.
empty: Kiểm tra xem map có rỗng hay không.
clear: Xóa tất cả các phần tử trong map.


std::map trong C++ là một container lưu trữ các cặp key-value và tự động sắp xếp chúng theo key. Nó rất hữu ích trong nhiều trường hợp thực tế như quản lý các cấu trúc dữ liệu phức tạp, thực hiện các phép toán tìm kiếm, chèn và xóa hiệu quả, hay xây dựng các cấu trúc dữ liệu khác dựa trên cặp key-value.