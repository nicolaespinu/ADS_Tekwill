//
// Created by Nicolae Spinu on 03.04.2021.
//
#include "iostream"

using namespace std;
int n, h, steps[10000000001];

int helper(int x[], int a, int h) {
    int result = 0;
    for (int i = 1; i < a; ++i) {
        if (x[i - 1] >= x[i]) {
            while (x[i - 1] >= x[i]) {
                result++;
                x[i] += h;
            }
        }
    }
    return result;
}

int main() {
    cout << "Hello SpiNic" << endl;
    cin >> n >> h;
    for (int i = 0; i < n; ++i) cin >> steps[i];
    cout << helper(steps, n, h);
    return 0;
}
/*Input
 * Din prima linie a inputului standard se citesc două numere întregi n și d
 * – numărul detrepte și înălțimea blocurilor folosite pentru reconstrucție.
 * Cea de a doua linie din input conține n numere întregi, pozitive, separate prin spațiu
 * – înălțimile curente ale treptelor, în ordinea apariției lor în scară
 * Output
 * Prima linie a output-ului standard conține un număr întreg –
 * numărul minimal de blocuri necesare pentru reconstrucția scării.
 *
Id_test  Date de intrare       Rezultat (pentru verificare)
01      4 2
        1 3 3 2                      3
02     10 3
       6 11 4 12 22 15 23 26 24 26     13
03     10 3
       2 1 17 10 5 16 8 4 15 17       31
04     3 3
       15 17 9                        3
05    10 3
      10 24 13 15 18 14 15 26 33 35   29 */