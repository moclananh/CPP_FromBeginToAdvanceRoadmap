// defining clasc
class Base {
public:
// non-static member function
void foo(param) { Statements; }
}

// object of Base Class
Base b;

// first parameter is the reference to the functionn
// and second paramter is reference of the object
// at last we have arguments
std::thread thread_obj(&Base::foo, &b, params);
