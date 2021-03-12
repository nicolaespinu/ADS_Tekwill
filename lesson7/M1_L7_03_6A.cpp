//
// Created by Nicolae Spinu on 12.03.2021.
//
//https://codeforces.com/problemset/problem/6/A

#include "iostream"

using namespace std;
int a, b, c, d;

bool checkTriangle(int x, int y, int z) {
    if (x + y > z && x + z > y && z + y > x) {
        return true;
    } else {
        return false;
    }
}

bool checkSegment(int x, int y, int z) {
    if (x + y == z || x + z == y || z + y == z) {
        return true;
    } else {
        return false;
    }
}

string check4Numbers(int a, int b, int c, int d) {
    if (checkTriangle(a, b, c) || checkTriangle(a, b, d) || checkTriangle(b, c, d) || checkTriangle(a, c, d)) {
        return "TRIANGLE";
    }
    if (checkSegment(a, b, c) || checkSegment(a, b, d) || checkSegment(b, c, d) || checkSegment(a, c, d)) {
        return "SEGMENT";
    } else {
        return "IMPOSSIBLE";
    }

}

int main() {
    cin >> a >> b >> c >> d;
    cout << check4Numbers(a, b, c, d);
    return 0;
}