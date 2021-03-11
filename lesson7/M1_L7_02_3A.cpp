//
// Created by Nicolae Spinu on 11.03.2021.
//
//https://codeforces.com/problemset/problem/3/A

#include "iostream"
#include <string>

using namespace std;

string fromStart, toEnd, w, h;
int height, width, counter;

void inputData() {
    cout << "Input data: " << endl;
    cin >> fromStart;
    cin >> toEnd;
}

int main() {
    inputData();
    width = fromStart[0] - toEnd[0];
    height = fromStart[1] - toEnd[1];

    w = width > 0 ? "L" : "R";
    h = height > 0 ? "D" : "U";

    height = abs(height);
    width = abs(width);

    if (width > height) {
        cout << width << endl;
        for (counter = 0; counter < height; counter++)
            cout << w << h << endl;
        while (counter++ < width)
            cout << w << endl;
    } else {
        cout << height << endl;
        for (counter = 0; counter < width; counter++)
            cout << w << h << endl;
        while (counter++ < height)
            cout << h << endl;
    }
    return 0;
}


