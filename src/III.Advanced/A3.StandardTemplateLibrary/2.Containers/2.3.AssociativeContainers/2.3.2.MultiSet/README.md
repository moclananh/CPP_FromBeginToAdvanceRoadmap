### same like set. But it's can store douplicate element

std::multiset là một container trong thư viện chuẩn C++ (<set>) tương tự như std::set, nhưng khác ở chỗ nó cho phép lưu trữ các phần tử trùng lặp. Các phần tử trong std::multiset được tự động sắp xếp theo thứ tự tăng dần (mặc định) hoặc theo thứ tự do người dùng chỉ định thông qua một comparator.

Các phương thức trong std::multiset
insert: Thêm một phần tử vào multiset. Cho phép các phần tử trùng lặp.
erase: Xóa một phần tử hoặc tất cả các phần tử có giá trị cụ thể khỏi multiset.
find: Tìm kiếm một phần tử trong multiset. Trả về iterator trỏ đến phần tử nếu tìm thấy, hoặc end() nếu không tìm thấy.
count: Trả về số lượng phần tử có giá trị cụ thể trong multiset.
begin: Trả về iterator trỏ đến phần tử đầu tiên trong multiset.
end: Trả về iterator trỏ đến vị trí sau phần tử cuối cùng trong multiset.
size: Trả về số lượng phần tử trong multiset.
empty: Kiểm tra xem multiset có rỗng hay không.
clear: Xóa tất cả các phần tử trong multiset.
