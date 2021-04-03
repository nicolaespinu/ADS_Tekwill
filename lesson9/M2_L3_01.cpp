//
// Created by Nicolae Spinu on 03.04.2021.
//

#include "iostream"

using namespace std;
int n, batalionA[1000001], flag = 1;
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> batalionA[i];
    for (int i = 1; i < n; ++i) {
        if (batalionA[i - 1] < batalionA[i]) {
            flag = 0;
            break;
        }
    }
    if (flag)cout << "PERFECT" << endl;
    else cout << "IMPERFECT" << endl;
    return 0;
}
/* Input
 * Prima linie a inputului standard conține un număr întreg n (n < 50).
 * Cea de a doua linie a inputului standard conține n numere separate prin spații
 * -elementele tabloului care descrie înălțimile soldaților
 *
 * Output
 * In outputul standard se afișează mesajul PERFECT dacă numerele fin șir
 * formează o secvență descrescătoare, IMPERFECT –în caz contrar

 Id_test Date de intrare        Rezultat(pentru verificare)
01  5
    190 188 176 158 158                       PERFECT
02  10
    191 189 185 182 170 169 167 176 164 160   IMPERFECT
03  1
    120                                         PERFECT
04  2
    189 187                                     PERFECT
05  5
   180 190 185 183 182                          IMPERFECT
 */