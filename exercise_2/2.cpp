/*
 * File:   2.cpp
 * Author: Tziridis
 * Description: Exercise 2 found on http://en.wikibooks.org/wiki/C++_Programming/Exercises/Iterations
 * Created on November 9, 2014, 10:06 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int val;
    cout << "Enter the number 8" << endl;
    cin >> val;
    if (val == 8)
    {
        for (int i=val; i < 24; i++)
        {
            cout << "Type all the numbers between 8 and 23 (including 23)" << endl;
            cin >> i;
        }
    }
    else if (val != 8)
        {
        cout << "You entered wrong value" << endl;
        }
    return 0;
}

