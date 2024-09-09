Sometimes there is a requirement to modify one or more data members of class/struct through the const function even though you don’t want the function to update other members of class/struct. This task can be easily performed by using the mutable keyword. The keyword mutable is mainly used to allow a particular data member of a const object to be modified.

Sumz: Khi khoi tao 1 object la const (readonly), se khong cho phep thay doi gia tri cua cac bien trong object. Tuy nhien co the modify duoc bang cach khai bao cac bien voi -> mutable keyword.
