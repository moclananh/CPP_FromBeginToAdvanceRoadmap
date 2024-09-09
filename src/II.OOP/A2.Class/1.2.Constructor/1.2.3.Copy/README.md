When is a Copy Constructor Called in C++?
A copy constructor is a member function that initializes an object using another object of the same class. The Copy constructor is called mainly when a new object is created from an existing object, as a copy of the existing object.

In C++, a Copy Constructor may be called for the following cases:

1. When an object of the class is returned by value.
2. When an object of the class is passed (to a function) by value as an argument.
3. When an object is constructed based on another object of the same class.
4. When an object is constructed using initialization lists with braces
5. When the compiler generates a temporary object.
