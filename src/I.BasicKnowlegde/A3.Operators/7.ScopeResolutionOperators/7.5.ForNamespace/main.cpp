#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define nline "\n"

// Global Declarations

string favlangBase = "python";
string companyBase = "GFG_2.0";

// You can also do the same thing in classes as we did in
// our struct example

class Developer
{
public:
    string favlangDev = "c++";
    string companyDev = "GFG";

    // Accessing Global Declarations
    Developer(string favlangRequest, string companyRequest)
        : favlangDev(favlangBase), companyDev(companyBase) // it will be print data from base value
                                                           //  because request is a base data
    {
    }
};

int main()
{
    Developer obj = Developer("cs", "mladev");
    cout << "favourite Language : " << obj.favlangDev << endl;
    cout << "company Name : " << obj.companyDev << nline;
}
