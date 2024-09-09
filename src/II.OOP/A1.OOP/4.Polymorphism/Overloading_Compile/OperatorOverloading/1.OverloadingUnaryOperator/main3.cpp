// CPP program to demonstrate the
// Difference between pre increment
// and post increment overload operator
#include <iostream>
using namespace std;

class overload
{
private:
    int count;

public:
    overload(int i)
        : count(i)
    {
    }

    overload operator++(int) { return (count++); }
    overload operator++()
    {
        count = count + 1;
        return count;
    }
    void Display() { cout << "Count: " << count << endl; }
};
// Driver code
int main()
{
    overload i(5);
    overload post(5);
    overload pre(5);

    // this calls "function overload operator ++()" function
    pre = ++i;
    cout << "results of I = ";
    i.Display();
    cout << "results of preincrement = ";
    pre.Display();
    // this call "function overload operator ++()"function
    i++; // just to show diff
    i++; // just to show diff
    post = i++;
    cout << "Results of post increment = ";
    post.Display();
    cout << "And results of i , here we see difference : "
            " ";
    i.Display();
    return 0;
}
