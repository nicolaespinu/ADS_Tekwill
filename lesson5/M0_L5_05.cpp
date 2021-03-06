//
// Created by Nicolae Spinu on 05.03.2021.
//

#include "iostream"

using namespace std;

int main() {
    float s, k, result, age = 0;
    cout << "Introduceti suma aspre depunere: " << endl;
    cin >> s;
    result = 2 * s;
    cout << "Introduceti dobinda anuala a bancii: " << endl;
    cin >> k;
    while (s < result) {
        age++;
        s += (s * k) / 100;
    }
    cout << age;
    return 0;
}


//Enunț
//        Valeria dispune de suma S, pe care dorește să o depună la bancă. Banca oferă o
//        dobândă anuală de k%, care se calculează la sfârșitul fiecărui an, reieșind din suma disponibilă la începutul anului precedent.
//Valeria dorește să afle, peste câți ani suma depusă la bancă se va dubla! Scrie un program, care va determina timpul necesar, în ani.
//
//Input
//        Din inputul standard se citesc două numere întregi separate prin spațiu n (1 < n < 10000) – suma depusă și k (0 < k < 10) procentul dobânzii anuale.
//
//Output
//        În outputul standard se afișează un număr întreg – timpul în ani, necesar ca suma curentă din cont să devină mai mare decât dublul sumei inițiale

/*
Id_test Date de intrare Rezultat (pentru verificare)
01   1000 10  8
02   2000 12  7
03   2500 7   11
05   1000 4   18  */
/*
Explicație test 1 Suma – 1000, % - 10
După anul 1 1100.00
După anul 2 1210.00
După anul 3 1331.000000
După anul 4 1464.099976
După anul 5 1610.510010
După anul 6 1771.561035
După anul 7 1948.71
După anul 8 2143.58 */