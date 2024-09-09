std::partition và std::is_partitioned là hai hàm trong thư viện <algorithm> của C++ dùng để phân chia một dãy phần tử dựa trên một điều kiện nhất định và để kiểm tra xem một dãy phần tử đã được phân chia theo điều kiện đó hay chưa.

Partition operations :

1. partition(beg, end, condition) : Hàm std::partition sắp xếp lại dãy phần tử trong một khoảng sao cho tất cả các phần tử thỏa mãn điều kiện được đặt trước những phần tử không thỏa mãn điều kiện.
2. is_partitioned(beg, end, condition) : Hàm std::is_partitioned kiểm tra xem một dãy phần tử có thỏa mãn điều kiện phân chia hay không, tức là tất cả các phần tử thỏa mãn điều kiện được đặt trước những phần tử không thỏa mãn điều kiện.
3. stable_partition(beg, end, condition) : std::stable_partition là một hàm trong thư viện <algorithm> của C++ giúp phân chia một dãy phần tử thành hai nhóm dựa trên một điều kiện, nhưng vẫn giữ nguyên thứ tự tương đối của các phần tử trong mỗi nhóm. Nó khác với std::partition ở chỗ std::partition không đảm bảo giữ nguyên thứ tự tương đối của các phần tử.

4. partition_point(beg, end, condition) : std::partition_point là một hàm trong thư viện <algorithm> của C++ dùng để tìm vị trí đầu tiên trong dãy phần tử mà từ đó tất cả các phần tử đều không thỏa mãn điều kiện đã cho. Hàm này giả định rằng dãy phần tử đã được phân chia dựa trên điều kiện.

5. partition_copy(beg, end, beg1, beg2, condition): std::partition_copy là một hàm trong thư viện <algorithm> của C++ dùng để sao chép các phần tử từ một dãy nguồn thành hai dãy đích dựa trên một điều kiện nhất định. Một dãy đích sẽ chứa các phần tử thỏa mãn điều kiện, và dãy đích còn lại sẽ chứa các phần tử không thỏa mãn điều kiện.
