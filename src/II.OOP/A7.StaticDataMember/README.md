Static data members are class members that are declared using static keywords. A static member has certain special characteristics which are as follows:

Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
It is initialized before any object of this class is created, even before the main starts.
It is visible only within the class, but its lifetime is the entire program.
