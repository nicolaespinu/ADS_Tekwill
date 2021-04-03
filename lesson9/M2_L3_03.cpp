//
// Created by Nicolae Spinu on 03.04.2021.
//

#include "iostream"

using namespace std;
int n, flag = 1;
char inputData[1000001];

void printTab(int n, char *x) {
    for (int i = 0; i < n; ++i)
        cout << x[i];
    cout << endl;

}

int partition(char *x, int left, int right) {
    int pivot = x[right], index = left - 1;
    for (int i = left; i < right; ++i) {
        if (x[i] < pivot) {
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

void ordinateAlphabeticaly(char *x, int left, int right) {
    if (left >= right) return;
    int pIndex = partition(x, left, right);
    ordinateAlphabeticaly(x, left, pIndex - 1);
    ordinateAlphabeticaly(x, pIndex + 1, right);
}

void ordinateAlphabeticaly(char *x, int a) {
    ordinateAlphabeticaly(x, 0, a - 1);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> inputData[i];
    ordinateAlphabeticaly(inputData, n);
    printTab(n, inputData);
    return 0;
}

/*Input
 * Prima linie a inputului standard conține un număr întreg n (n < 500). Cea de a doua
 * linie a inputului standard conține un șir din n caractere majuscule ale alfabetului englez
 * - literele de pe cuburile care i-au fost dăruite lui Mihai.
 * Output
 * În prima și unica linie a output-ului standard se va afișa șirul de litere ordonat alfabetic.
 * Id_test Date de intrare Rezultat (pentru verificare)
01   6
     RAMOJE  ==> AEJMOR
02   4
     AGRA  ==> AAGR

03   24
     PARACETAMOLNITROBENZOLAT  ==> AAAABCEEILLMNNOOOPRRTTTZ

04   12
      DEFECTOSCOPE ==> CCDEEEFOOPST

05   5
     ACEST  ==> ACEST
 */