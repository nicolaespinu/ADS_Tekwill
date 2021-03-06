//
// Created by Nicolae Spinu on 05.03.2021.
//


#include "iostream"

using namespace std;

int quant(int x) {
    int s = 0;
    for (int i = 1; i <= x; i++)
        if (x % i == 0) s++;
    if (s != 2) return 0; else return 1;
}

int main() {
    int count = 0, a, b;
    cout << "Introduceti intervalul dorit: " << endl;
    cin >> a >> b;
    if (a > b) {
        int temp = b;
        b = a;
        a = temp;
    }
    for (int i = a; i <= b; ++i) {
        if (quant(i) == 1) { count++; }
    }
    cout << count;
    return 0;
}

//Enunț
//   Numerele prime întotdeauna au fost utilizate pentru dezvoltarea sistemelor de criptare și protecție a informației.
// Serviciul de securitate al Quamtustanului a interceptat un mesaj criptat. Pentru a-l decodifica este nevoie de toate
// numerele prime din intervalul de la a la b.
// Deoarece mesajul trebuie decodificat într-un timp cât mai scurt, iar volumul de calcule este mare, un program pentru
// determinarea numerelor prime este necesar.
// Din fericire în arhivele serviciului de securitate se păstrează descrierea unei funcții C++, care primind un număr
// întreg în calitate de parametru , returnează valoarea 1, dacă acesta este prim, sau 0 în caz contrar:
//Scrie un program care va determina câte numere prime sunt în intervalul de la a la b.

//Input
//        Din inputul standard se citesc două numere întregi, separate prin spațiu: a și b.
//Output
//        În output-ul standard se afișează un număr întreg – numărul primelor din intervalul a,b inclusiv.

/*
Id_test Date de intrare    Rezultat (pentru verificare)
01  10 20  4
02  20 100 17
03  59 59  1
04  75 78  0
05  20 200 38 */
