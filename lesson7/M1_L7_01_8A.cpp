//
// Created by Nicolae Spinu on 11.03.2021.
//
// https://codeforces.com/problemset/problem/8/A

#include "iostream"
#include <string>
#include <bitstring.h>

using namespace std;

string fullText, first, second;

void inputData() {
    cout << "Input  full string of flags: " << endl;
    cin >> fullText;
    cout << "Input first sequenceof flags" << endl;
    cin >> first;
    cout << "Input second sequence of flags" << endl;
    cin >> second;
}

string resultForw = "", resultBack = "";

int main() {
    inputData();
    for (int i = 0; i < fullText.length(); ++i) {
        if (fullText.substr(i, first.length()) == first) {
            for (int j = i; j < fullText.length(); ++j) {
                if (fullText.substr(j, second.length()) == second) {
                    resultForw = "forward";
                }
            }
        }
    }
    reverse(fullText.begin(), fullText.end());
    for (int i = 0; i < fullText.length(); ++i) {
        if (fullText.substr(i, first.length()) == first) {
            for (int j = i; j < fullText.length(); ++j) {
                if (fullText.substr(j, second.length()) == second) {
                    resultBack = "backward";
                }
            }
        }
    }
    if (resultForw != "" && resultBack != "") {
        cout << "both" << endl;
    } else if (resultForw != "" && resultBack == "") {
        cout << "forward" << endl;
    } else if (resultForw == "" && resultBack != "") {
        cout << "backward" << endl;
    } else {
        cout << "fantasy" << endl;
    }
}
