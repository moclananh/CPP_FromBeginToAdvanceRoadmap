#include <iostream>

using namespace std;

/* start of Enclosing class declaration */
class Enclosing
{
private:
    int x;

public:
    Enclosing(int val) : x(val) {}

    /* start of Nested class declaration */
    class Nested
    {
    private:
        int y;

    public:
        Nested(int val) : y(val) {}

        void NestedFun(Enclosing *e)
        {
            cout << "Enclosing::x = " << e->x << endl; // nested class can access private members of Enclosing class
        }

        void setY(int val) { y = val; }
        int getY() { return y; }
    }; // declaration Nested class ends here

    void EnclosingFun(Nested *n)
    {
        cout << "Nested::y = " << n->getY() << endl; // use public member function to access y
    }

}; // declaration Enclosing class ends here

int main()
{
    Enclosing e(5);
    Enclosing::Nested n(10);

    n.NestedFun(&e);    // Call Nested class function to access Enclosing class's private member
    e.EnclosingFun(&n); // Call Enclosing class function to access Nested class's private member

    return 0;
}
