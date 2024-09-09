std::unordered_set là một container trong thư viện chuẩn C++ (<unordered_set>) lưu trữ các phần tử duy nhất nhưng không theo thứ tự cụ thể nào. Nó sử dụng bảng băm (hash table) để quản lý các phần tử, đảm bảo thời gian trung bình của các thao tác tìm kiếm, chèn và xóa là O(1).

Các phương thức trong std::unordered_set
insert: Thêm một phần tử mới vào unordered_set.
erase: Xóa một phần tử khỏi unordered_set.
find: Tìm kiếm một phần tử trong unordered_set. Trả về iterator trỏ đến phần tử nếu tìm thấy, hoặc end() nếu không tìm thấy.
count: Trả về số lượng phần tử có giá trị cụ thể trong unordered_set (luôn là 0 hoặc 1 vì unordered_set không cho phép các phần tử trùng lặp).
begin: Trả về iterator trỏ đến phần tử đầu tiên trong unordered_set.
end: Trả về iterator trỏ đến vị trí sau phần tử cuối cùng trong unordered_set.
size: Trả về số lượng phần tử trong unordered_set.
empty: Kiểm tra xem unordered_set có rỗng hay không.
clear: Xóa tất cả các phần tử trong unordered_set.


### Note:

- Store unique value
- not ordered
- not allow douplicate element