/*
 * File:   2.cpp
 * Author: Tziridis
 * Description: Exercise 3 found on http://en.wikibooks.org/wiki/C++_Programming/Exercises/Iterations
 * Created on November 9, 2014, 10:46 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int val;
    cout << "Enter the number 8" << endl;
    cin >> val;
    if (val < 8)
    {
        cout << "Wrong value" << endl;
    }
    while (val == 8)
    {
        for (int i=val; i < 24; i++)
        {
            cout << "Type all the numbers between 8 and 23 (including 23)" << endl;
            cin >> i;
            if (i > 23)
            {
                cout << "wrong input" << endl;
            }
        }
    break; // Safe mechanism implementation, in order not to exceed 23 value
    }
    return 0;
}


