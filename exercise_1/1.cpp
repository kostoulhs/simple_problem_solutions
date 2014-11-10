/*
 * File:   1.cpp
 * Author: Tziridis
 * Description: Exercise 1 found on http://en.wikibooks.org/wiki/C++_Programming/Exercises/Iterations
 * Created on November 9, 2014, 9:53 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int val;
    cout << "Give an integer" << endl;
    cin >> val;
    if (val >= 56 && val <= 78)
    {
        cout << "You win" << endl;
    }
    else
    {
        cout << "You lose" << endl;
    }
    return 0;
}

