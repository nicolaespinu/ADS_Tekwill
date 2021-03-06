//
// Created by Nicolae Spinu on 05.03.2021.
//
#include "iostream"

using namespace std;
int a, b, c;

int main() {
    cout << "Introduceti laturile lotului de pământ: " << endl;
    cin >> a >> b >> c;
    if (a == b || b == c || a == c) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}

// Mihai a intrat în posesia unui lot de pământ de formă triunghiulară, cu lungimile laturilor a, b, c - numere întregi.
// El vrea să știe, dacă între laturile care formează frontiera lotului său există cel puțin două cu lungime egală.
//
//Input
//        Din inputul standard se citesc trei numere întregi a, b, c (0 < a, b, c < 100)
//
//Output
//        În inputul standard se afișează mesajul ”DA” dacă există cel puțin două laturi de
//        lungime egală, ”NU” – în caz contrar.

/*  Use-cases:
Id_test  Date de intrare  Rezultat (pentru verificare)
01   4 5 6     NU
02   8 8 10    DA
03   8 2 8     NU */
