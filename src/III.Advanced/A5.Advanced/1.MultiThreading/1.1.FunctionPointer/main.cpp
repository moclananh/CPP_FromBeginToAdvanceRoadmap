#include <iostream>
#include <map>
#include <string>
#include <thread>

using namespace std;

void RefreshForecast(map<string, int> forecastMap)
{
    while (true)
    {
        for (auto &item : forecastMap)
        {
            item.second++;
            cout << item.first << " - " << item.second << endl;
        }
        this_thread::sleep_for(2s);
        cout << endl; 
    }
}

int main()
{

    map<string, int> forecastMap = {
        {"VietNam", 10},
        {"Japan", 20},
        {"Korean", 30}};
    thread th(RefreshForecast, forecastMap);
    system("pause>nul");
}