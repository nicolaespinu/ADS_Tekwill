//
// Created by Nicolae Spinu on 18.03.2021.
//

#include "iostream"

using namespace std;

int main() {
    int n, x[50], result = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    for (int i = 1; i < n - 1; ++i) {
        if (x[i] > x[i - 1] && x[i] > x[i + 1]) {
            result++;
        }
    }
    cout << result << endl;
}

/*
 * 6 // 2 34 5 6 9 4  // 2
 * 7 // 3 5 7 8 9 21 41  // 0
 * 15 // 2 3 3 2 3 3 3 4 3 3 3 2 2 3 2 // 2
 * 11 // 2 4 3 6 5 8 7 12 9 15 10  // 5
 * 13 // 2 4 6 8 10 12 14 12 10 8 6 4 2 // 1
 * Într-un tablou unidimensional x cu n elemente:x[0],x[1], x[2], ... x[i],... x[n-1],”vârf”
 * este considerat orice element x[i], (0 < i < n -1)care are proprietatea x[i-1]< x[i]>x[i+1].
 * Fiind dat tabloul x cu n elemente, să se determine numărul de vârfuri în acest tablou.
 *   Input   Prima linie a inputului standard conține un număr întreg n (n < 50).
 * Cea de a doua linie a inputului standard conține n numere separate prin spații -elementele tabloului x
 *   Output  În outputul standard se afișează un număr întreg –numărul de ”vârfuri” în  tabloul x.
 */