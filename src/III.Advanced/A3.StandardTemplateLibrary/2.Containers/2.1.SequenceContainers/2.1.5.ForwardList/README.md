std::forward_list là một container trong thư viện chuẩn C++ (<forward_list>) được thiết kế để quản lý danh sách liên kết đơn. Nó cho phép thêm và xóa phần tử ở bất kỳ vị trí nào trong danh sách một cách hiệu quả, nhưng chỉ hỗ trợ duyệt đơn hướng (từ đầu đến cuối).

Thao tác với std::forward_list
Thêm phần tử: push_front, emplace_front, insert_after, emplace_after
Xóa phần tử: pop_front, erase_after, remove, clear
Truy cập phần tử: front
Duyệt qua các phần tử: sử dụng iterator
assign: Gán giá trị cho forward_list
resize: Thay đổi kích thước của forward_list
reverse: Đảo ngược các phần tử trong forward_list
sort: Sắp xếp các phần tử trong forward_list
merge: Hợp nhất hai forward_list đã được sắp xếp
splice_after: Di chuyển phần tử từ một forward_list khác
