ArrayList là một cấu trúc dữ liệu tuyến tính giống như mảng nhưng có khả năng thay đổi kích thước động. Trong C++, std::vector là một ví dụ của ArrayList.

### Đặc điểm của ArrayList:

Kích thước động: Kích thước của ArrayList có thể thay đổi khi cần thiết, phần tử có thể được thêm hoặc xóa.
Truy cập ngẫu nhiên: Phần tử bất kỳ có thể được truy cập trực tiếp bằng chỉ số, thời gian truy cập là O(1).
Chèn/Xóa: Chèn/xóa phần tử ở giữa ArrayList có thể tốn kém vì phải dịch chuyển các phần tử, thời gian thực hiện là O(n). Tuy nhiên, việc thêm/xóa phần tử ở cuối ArrayList là O(1) trong hầu hết các trường hợp.

### Sử dụng std::vector khi:

Cần truy cập ngẫu nhiên các phần tử thường xuyên.
Chèn hoặc xóa phần tử chủ yếu ở cuối container.
Yêu cầu hiệu suất duyệt nhanh và quản lý bộ nhớ hiệu quả.
