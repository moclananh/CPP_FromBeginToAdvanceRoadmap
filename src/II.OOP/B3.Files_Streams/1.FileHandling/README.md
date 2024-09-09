Trong C++, việc xử lý tệp tin (file handling) được thực hiện thông qua các lớp thư viện chuẩn (standard library classes) trong thư viện <fstream>. Thư viện này cung cấp các lớp như ifstream (input file stream), ofstream (output file stream), và fstream (file stream) để đọc, ghi, và thao tác với tệp tin.

### Chế độ Mở Tệp Tin

std::ios::in: Mở tệp tin để đọc.
std::ios::out: Mở tệp tin để ghi.
std::ios::app: Mở tệp tin để ghi thêm vào cuối (append).
std::ios::ate: Mở tệp tin và di chuyển con trỏ tới cuối tệp tin.
std::ios::trunc: Mở tệp tin và xóa nội dung hiện có.
std::ios::binary: Mở tệp tin ở chế độ nhị phân.
