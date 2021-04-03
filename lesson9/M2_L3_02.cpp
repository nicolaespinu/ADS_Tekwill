//
// Created by Nicolae Spinu on 03.04.2021.
//

#include "iostream"

using namespace std;
int n, batalion[1000001], flag = 1;

void printTab(int n, int *x) {
    for (int i = 0; i < n; ++i)
        cout << x[i] << " ";
    cout << endl;

}

int partition(int *x, int left, int right) {
    int pivot = x[right], index = left - 1;
    for (int i = left; i < right; ++i) {
        if (x[i] > pivot) {
            int t = x[++index];
            x[index] = x[i];
            x[i] = t;
        }
    }
    int t = x[++index];
    x[index] = pivot;
    x[right] = t;
    return index;
}

void ordinateSoldiers(int *x, int left, int right) {
    if (left >= right) return;
    int pIndex = partition(x, left, right);
    ordinateSoldiers(x, left, pIndex - 1);
    ordinateSoldiers(x, pIndex + 1, right);
}

void ordonateSoldiers(int x[], int a) {
    ordinateSoldiers(x, 0, a - 1);
}

int main() {
    cout << "hello spinic" << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> batalion[i];
    for (int i = 1; i < n; ++i) {
        if (batalion[i - 1] < batalion[i]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        cout << "PERFECT" << endl;
    } else {
        cout << "Ordinating... " << endl;
        ordonateSoldiers(batalion, n);
    }
    printTab(n, batalion);
    return 0;
}
/*Input
 * Prima linie a inputului standard conține un număr întreg n (n < 50).
 * Cea de a doua linie  a inputului standard conține n numere separate prin spații
 * - elementele tabloului care descrie înălțimile soldaților
 * Output
 * În output-ul standard se afișează într-o linie elementele tabloului
 * care descrie înălțimile soldaților, ordonate descrescător
 * Id_test Date de intrare Rezultat (pentru verificare)
01   5
     168 183 181 178 185  ==> 185 183 181 178 168
02   2
     191 189  ==> 191 189

03   1
     158  ==> 158

04   7
      178 179 180 181 182 182 183 ==> 183 182 182 181 180 179 178

05   6  188 188 188 188 188 190  ==> 190 188 188 188 188 188*/