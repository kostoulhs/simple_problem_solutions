/*
 * File:   5.cpp
 * Author: Tziridis
 * Description: Exercise 5 found on http://en.wikibooks.org/wiki/C++_Programming/Exercises/Iterations
 * Created on November 14, 2014, 9:34 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int min, val;
    double table[10];
    for (int i = 1; i < 11; i++)
    {
        cout << "Give me the " << i << "st number" << endl;
        cin >> val;
    }
    min = table[0];
    for (int j = 1; j < 10; j++)
    {
        if (table[j] < min)
        {
            min = table[j];
        }
    }
    cout << "Minimum value is: " << min << endl;
    return 0;
}
