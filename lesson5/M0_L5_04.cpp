//
// Created by Nicolae Spinu on 05.03.2021.
//

#include "iostream"

using namespace std;

int main() {
    int n, min = 9, max = 0;
    cout << "Introduceti numarul dorit: " << endl;
    cin >> n;
    while (n > 0) {
        int temp = n % 10;
        if (temp < min) { min = temp; }
        if (temp > max) { max = temp; }
        n = n / 10;
    }
    cout << max - min;
    return 0;
}


//
//Enunț
//        Amplituda numărului este diferența dintre cea mai mare dintre cifrele care apar în
//scrierea numărului, și cea mai mică dintre aceste cifre. De exemplu, amplituda numărului 2371 este 6 (7 - 1); amplituda numărului 4279 este 7 (9 - 2); amplituda numărului 2332 este 1 (3 - 2).
//Scrie un program, care va determina amplituda unui număr n, dat.
//
//Input
//        Din inputul standard se citește un număr întreg n (1 < n < 10000)
//
//Output
//        În outputul standard se afișează un număr întreg, între 0 și 9 – amplituda numărului inițial

/*
Use-cases:
Id_test  Date de intrare  Rezultat (pentru verificare)
01       12981221         8
02       23               1
03       8888             0
04       4023             4
05       1005             5 */
