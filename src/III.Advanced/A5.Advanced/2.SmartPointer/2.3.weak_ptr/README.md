std::weak_ptr không sở hữu đối tượng mà chỉ giữ một tham chiếu yếu tới đối tượng được std::shared_ptr sở hữu. Nó được sử dụng để phá vỡ các vòng tham chiếu (circular references).
