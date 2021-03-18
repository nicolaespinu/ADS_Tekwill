//
// Created by Nicolae Spinu on 19.03.2021.
//

#include "iostream"

using namespace std;

int main() {
    int n, x[50], counter = 0, summa = 0, halfSumma = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
        summa += x[i];
    }
    while (halfSumma < summa / 2) {
        halfSumma += x[counter++];
    }
    cout << counter - 1 << endl;
    return 0;
}
/*
 * 6 // 12 5 8 11 7 6 // 2  +
 * 3 // 5 15 2 // 0
 * 10 // 4 12 4 9 56 23 61 8 23 1 // 5 +
 * 15 // 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 // 6 +
 * 19 // 2 3 4 6 8 2 4 1 5 2 8 5 9 5 3 1 7 7 2 // 10+
 *
 * Prima linie a inputului standard conține un număr întreg n (1 < n < 50) de buzunare în brâu.
 * Cea de a doua linie a inputului standard conține n numere separate prin spații
 *   - elementele tabloului x – conținutul buzunarelor
   Output
   În outputul standard se afișează un număr întreg – indicele elementului din tabloul x, după care se va face tăietura.
 */