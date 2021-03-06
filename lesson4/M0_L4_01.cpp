//
// Created by Nicolae Spinu on 05.03.2021.
//

#include "iostream"

using namespace std;
int n = 0;

int main() {
    cout << "Introduceti kilogramele pepenelui: " << endl;
    cin >> n;
    if (n % 2 == 0) {
        cout << "Posibil" << endl;
    } else {
        cout << "Imposibil" << endl;
    }
    return 0;
}

// Mihai și Dan au cumpărat un pepene verde. Acesta cântărește un număr întreg de kilograme.
// Băeții vor să împartă pepenele în două părți greutate egală.
// Scrie un program care îi va ajuta să afle dacă este posibili să împartă pepenele în două părți egale,
// de greutate întreagă.
//
// Input
//        Din inputul standard se citește un număr întreg n (0 < n < 100)
// Output
//        În inputul standard se afișează mesajul ”Posibil” dacă pepenele poate fi împărțit în doup părți egale
//        de aceeași greutate, ”Imposibil” – în caz contrar.

/*
    Use-cases
Id_test  Date de intrare  Rezultat (pentru verificare)
01     14    Posibil
02     999   Imposibil
03     8     Posibil*/
