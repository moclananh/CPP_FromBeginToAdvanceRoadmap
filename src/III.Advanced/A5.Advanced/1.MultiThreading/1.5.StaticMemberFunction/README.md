// defining class
class Base {
public:
// static member function
static void foo(param) { Statements; }
}

// object of Base Class
Base b;
// first parameter is the reference to the function
// and rest are arguments
std::thread thread_obj(&Base::foo, params);
