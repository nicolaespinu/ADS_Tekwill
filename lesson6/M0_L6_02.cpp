//
// Created by Nicolae Spinu on 05.03.2021.
//


#include "iostream"

using namespace std;

int invers(int x) {
    int z = 0;
    while (x > 0) {
        z = z * 10 + x % 10;
        x = x / 10;
    }
    return z;
}

int main() {
    int n;
    cout << "Introduceti numarul spre verifivare: " << endl;
    cin >> n;
    if (n == invers(n)) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}


//Enunț
//   Numerele palindromice sunt numerele, a căror valoare este aceeași, dacă numărul se citește de
//   la stânga la dreapta sau de la dreapta la stânga. De exemplu: 131, 2552, 67776.
//Fiind dat un număr pozitiv, întreg N, să se determine, dacă acesta este unul palindromic.
//Input
//        Din inputul standard se citește un număr întreg N (1 < N < 109)
//Output
//        În output-ul standard se afișează mesajul ”DA” dacă numărul este palindrom, - ”NU” - în caz contrar.


/*
Id_test Date de intrare Rezultat (pentru verificare)
01  1771       DA
02  2          DA
03  38         NU
04  44444      DA
05  123454321  DA
06  43211234   DA
07  543245     NU*/
