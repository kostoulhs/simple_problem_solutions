/*
 * File:   4.cpp
 * Author: Tziridis
 * Description: Exercise 4 found on http://en.wikibooks.org/wiki/C++_Programming/Exercises/Iterations
 * Created on November 14, 2014, 9:28 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int sum = 0;
    int val;
    for (int i = 1; i < 11; i++)
    {
        cout << "Give me the " << i << "st number" << endl;
        cin >> val;
        sum += val;
    }
    cout << "Sum is: " << sum <<endl;
    return 0;
}
