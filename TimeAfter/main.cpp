#include <iostream>

using namespace std;

int main()
{
    int hours,mins;
    cin >> hours >> mins;
    int addMins;
    cin >> addMins;
    int newMins;
    newMins = mins + addMins;
    hours += (int) (newMins/60);
    mins = newMins%60;
    string zeroOnHours = "";
    string zeroOnMins = "";
    if (hours > 23) hours %= 24;
    if (hours < 10) zeroOnHours = "0";
    if (mins < 10) zeroOnMins = "0";
    cout << zeroOnHours << hours << " " << zeroOnMins << mins << "\n";

}
