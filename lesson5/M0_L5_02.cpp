//
// Created by Nicolae Spinu on 05.03.2021.
//

#include "iostream"

using namespace std;

int main() {
    int num, result = 0;

    cout << "Introduceti numarul dorit: " << endl;
    cin >> num;
    for (int i = 1; i <= num / 2 + 1; ++i) {
        if (num % i == 0) {
            result += i;
        }
    }
    if (result == num) {
        cout << "DA";
    } else {
        cout << "NU";
    }

    return 0;
}

// Valeria studiază divizibilitatea și astăzi a aflat despre numerele perfecte. Acestea sunt numerele,
// pentru care suma divizorilor proprii (suma tuturor divizorilor, cu excepția numărului propriu-zis)
// este egală cu însăși numărul: de exemplu – 6 (6 = 1 + 2 + 3) sau 28 (28 = 1 + 2 + 4 + 7 + 14).
// Valeria vrea să afle, dacă un număr dat n este perfect sau nu. Deoarece volumul de calcule este semnificativ,
// scrie un program, care o va ajuta pe Valeria!
//  Input
//        Din inputul standard se citește numărul întreg n (1 < n < 100000)
//  Output
//        În inputul standard se afișează mesajul ”DA” dacă numărul este perfect, ”NU” – în caz contrar.
/*
Uses-cases:
Id_test  Date de intrare  Rezultat (pentru verificare)
01  37  NU
02  496 DA
03  2357  NU
05  12816  NU
*/