//
// Created by Nicolae Spinu on 05.03.2021.
//

#include "iostream"

using namespace std;

int main() {
    int number, result = 0;

    cout << "Introduceti numarul întreg n = " << endl;
    cin >> number;
    for (int i = 0; i <= number; ++i) {
        result += i * i;
    }
    cout << result << endl;
    return 0;
}
// Mihai tocmai a învățat despre pătratele numerelor. El vrea să calculeze suma pătratelor numerelor
// întregi de la 1 până la n. Deoarece trebuie să calculeze mult, a decis că are nevoie de un program.
// Scrie acest program, care calculează suma: 1*1 + 2*2 + 3*3 + 4*4 + ⋯ +n*n
// Input
// Din inputul standard se citește un număr întreg n (0 < n < 100)
//
// Output
//        În inputul standard se afișează suma calculată
/* Use-cases:
Id_test  Date de intrare  Rezultat (pentru verificare)
01  5    55
02 20   2870
03 59   70210
04 75   143450
05 99   328350 */
