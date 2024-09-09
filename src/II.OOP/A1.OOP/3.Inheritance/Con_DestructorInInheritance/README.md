Constructors and Destructors are generally defined by the programmer and if not, the compiler automatically creates them so they are present in every class in C++. Now, the question arises what happens to the constructor and destructor when a class is inherited by another class.

In C++ inheritance, the constructors and destructors are not inherited by the derived class, but we can call the constructor of the base class in derived class.

The constructors will be called by the complier in the order in which they are inherited. It means that base class constructors will be called first, then derived class constructors will be called.
The destructors will be called in reverse order in which the compiler is declared.
We can also call the constructors and destructors manually in the derived class.
