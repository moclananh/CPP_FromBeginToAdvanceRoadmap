// CPP program to illustrate
// when not using static keyword
#include <iostream>
using namespace std;

class GfG
{
    int i;

public:
    GfG()
    {
        i = 0;
        cout << "Inside Constructor\n";
    }
    ~GfG() { cout << "Inside Destructor\n"; }
};

int main()
{
    int x = 0;
    if (x == 0)
    {
        GfG obj;
    }
    cout << "End of main\n";
}
