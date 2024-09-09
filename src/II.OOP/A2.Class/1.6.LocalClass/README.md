https://www.geeksforgeeks.org/local-class-in-cpp/?ref=lbp

A class declared inside a function becomes local to that function and is called Local Class in C++.

A local class name can only be used locally i.e., inside the function and not outside it.
The methods of a local class must be defined inside it only.
A local class can have static functions but, not static data members.

1. A local class type name can only be used in the enclosing function.

2. All the methods of Local classes must be defined inside the class only

3. A Local class cannot contain static data members. It may contain static functions though.

4. Member methods of the local class can only access static and enum variables of the enclosing function. Non-static variables of the enclosing function are not accessible inside local classes

5. Local classes can access global types, variables, and functions. Also, local classes can access other local classes of the same function.
