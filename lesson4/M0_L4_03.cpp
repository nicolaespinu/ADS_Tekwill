//
// Created by Nicolae Spinu on 05.03.2021.
//

#include "iostream"

using namespace std;
char digit;

int main() {
    cout << "Introduceti caracterul dorit: " << endl;
    cin >> digit;
    switch (digit) {
        case 'I':
            cout << "1";
            break;
        case 'V':
            cout << "5";
            break;
        case 'X':
            cout << "10";
            break;
        case 'L':
            cout << "50";
            break;
        case 'C':
            cout << "100";
            break;
        case 'D':
            cout << "500";
            break;
        case 'M':
            cout << "1000";
            break;
        default:
            cout << "Cifra inexistenta";
    }
    return 0;
}

/*
Dan a aflat despre existența numerelor romane. Acum el vrea să scrie un program, care ar transforma cifrele romane
 în numere arabe. Evident, dacă întâmplător se introduce un simbol greșit (care nu este o cifră romană),
 programul va afișa un mesaj de eroare – „Cifra inexistenta”.
Ajută-l pe Dan să scrie programul!
Apropo, cifrele romane sunt simbolurile ’I’ – 1, ’V’ – 5, ’X’ – 10, ’L’ – 50, ’C’ – 100, ’D’ – 500, ’M’ – 1000.
Input
        Din inputul standard se citește un caracter – cifra romană
Output
        În inputul standard se afișează un număr întreg valoarea cifrei romane în cazul unei cifre valide introduse.
        În caz contrar se va afișa mesajul ”Cifra inexistenta”.*/

/*  Use-cases:
Id_test  Date de intrare  Rezultat (pentru verificare)
01    X  10
02    Z   ”Cifra inexistenta”.
03    D   500*/
