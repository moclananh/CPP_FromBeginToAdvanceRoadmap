Iterator là một khái niệm quan trọng trong C++ và STL (Standard Template Library), cho phép truy cập các phần tử của các container (như vector, list, set, map, ...) một cách tuần tự mà không cần biết chi tiết về cấu trúc bên trong của container đó. Iterator hành xử giống như con trỏ, cho phép lặp lại qua các phần tử của container và thực hiện các thao tác trên chúng.

### Các loại iterator trong C++

Trong C++, có nhiều loại iterator khác nhau, mỗi loại phù hợp với các yêu cầu và hạn chế khác nhau. Dưới đây là một số loại iterator cơ bản:

Input Iterator: Cho phép đọc và di chuyển một cách tuần tự qua các phần tử của container. Tuy nhiên, chỉ cho phép duyệt qua mỗi phần tử một lần.

Output Iterator: Cho phép ghi và di chuyển một cách tuần tự qua các phần tử của container.

Forward Iterator: Tương tự như Input Iterator nhưng cho phép di chuyển tuần tự về phía trước, có thể lặp qua từng phần tử một lần và cho phép cập nhật giá trị của phần tử.

Bidirectional Iterator: Tương tự như Forward Iterator nhưng cho phép di chuyển cả về phía sau và phía trước.

Random Access Iterator: Loại iterator mạnh nhất, cho phép di chuyển tuần tự qua các phần tử và cũng cho phép truy cập ngẫu nhiên vào các phần tử bằng cách sử dụng toán tử +, -, [], ... Như vậy, loại iterator này có thể thực hiện tất cả các phép toán có thể với con trỏ.
