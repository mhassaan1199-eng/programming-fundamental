/*
  Name        : Muhammad Hassaan
  Roll Number : 26i-2579
  Assignment  : Assignment 2 - Question 2
*/

#include <iostream>
using namespace std;

int main()
{
    int status;
    cout << "Enter status: ";
    cin >> status;

    // WiFi
    int wifi = status & 1;

    // Bluetooth
    int bluetooth = (status >> 1) & 1;

    // GPS
    int gps = (status >> 2) & 1;

    // Battery Saver
    int batterySaver = (status >> 3) & 1;

    // Device Mode
    int mode = (status >> 4) & 3;

    // WiFi
    if (wifi == 1)
        cout << "WiFi is on" << endl;
    else
        cout << "WiFi is off" << endl;

    // Bluetooth
    if (bluetooth == 1)
        cout << "Bluetooth is on" << endl;
    else
        cout << "Bluetooth is off" << endl;

    // GPS
    if (gps == 1)
        cout << "GPS is on" << endl;
    else
        cout << "GPS is off" << endl;

    // Battery Saver
    if (batterySaver == 1)
        cout << "Battery Saver is on" << endl;
    else
        cout << "Battery Saver is off" << endl;

    // Device Mode
    if (mode == 0)
        cout << "Device Mode: \"Normal\"" << endl;
    else if (mode == 1)
        cout << "Device Mode: \"Silent\"" << endl;
    else if (mode == 2)
        cout << "Device Mode: \"Performance\"" << endl;
    else
        cout << "Device Mode: \"Gaming\"" << endl;

    return 0;
}
