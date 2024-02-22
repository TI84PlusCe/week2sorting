// week2sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double a = 56, b = 4, c = 12;
    double high=0;

    if (a > high) {
        high = a;
    }
    if (b > high) {
        high = b;
    }
    if (c > high) {
        high = c;
    }
    cout << " The highest # is =====> " << high << endl;
  
    double low = a;
    if (a < low) {
        low = a;
    }
    if (b < a) {
        low = b;
    }
    if (c < low) {
        low = c;
    }
    cout << " The lowest # is ==== > " << low << endl;
}
