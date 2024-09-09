std::priority_queue là một container trong thư viện chuẩn C++ (<queue>) thực hiện cấu trúc dữ liệu hàng đợi ưu tiên (priority queue). Khác với std::queue thực hiện theo nguyên tắc "First In First Out" (FIFO), std::priority_queue sắp xếp các phần tử dựa trên một tiêu chí ưu tiên mà người dùng chỉ định. Phần tử có ưu tiên cao hơn (theo tiêu chí xác định) sẽ được đưa vào đầu hàng đợi.

// Sumz: la array nhma khi in ra no tu sort lai. ez

std::priority_queue trong C++ là một cấu trúc dữ liệu hàng đợi ưu tiên, tự động sắp xếp các phần tử theo tiêu chí ưu tiên được chỉ định (mặc định là lớn nhất trước). Nó rất hữu ích trong nhiều trường hợp thực tế như xử lý các sự kiện theo thứ tự ưu tiên, lập lịch công việc dựa trên độ quan trọng, hay quản lý các tác vụ trong hệ thống.
