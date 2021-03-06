//
// Created by Nicolae Spinu on 05.03.2021.
//

#include "iostream"

using namespace std;

bool isPrime(int number) {
    int divisor = 0;
    if (number < 2) {
        return false;
    }
    for (int i = 1; i < number; ++i) {
        if (number % i == 0) {
            divisor++;
        }
    }
    if (divisor > 1) {
        return false;
    } else {
        return true;
    }
}

int checkSum(int number) {
    int result = 0;
    while (number > 0) {
        result += number % 10;
        number = number / 10;
    }
    result += number;
    return result;
}

int main() {
    long int n;

    cout << "Introduceti un număr întreg: " << endl;
    cin >> n;
    if (isPrime(n) && isPrime(checkSum(n))) {
        cout << "Superprim !" << endl;
    } else if (isPrime(n) && !isPrime(checkSum(n))) {
        cout << "Prim" << endl;
    } else if (!isPrime(n) && isPrime(checkSum(n))) {
        cout << "Semiprim" << endl;
    } else {
        cout << "Supercompus" << endl;
    }
    return 0;
}

/*
Astăzi Valeria a învățat numerele superprime. Un număr se numește superprim, dacă
        el este prim și suma cifrelor lui de asemenea este un număr prim.
Valeria vrea să scrie un program care să determine dacă un număr dat n este superprim, dar nu știe încă cum.
 O poți ajuta?
Input
        Din inputul standard se citește un număr întreg n (1 < n < 10000)
Output
        În outputul standard se afișează unul din mesajele: ”Superprim!” dacă numărul are proprietatea de superprim,
        ”Prim” – dacă numărul e prim dar suma cifrelor – nu, ”Semiprim” – dacă numărul nu este prim, dar suma cifrelor
        este un număr prim, ”Supercompus” – dacă și numărul și suma cifrelor lui nu sunt prime.*/
/*
Use-cases:
Id_test  Date de intrare  Rezultat (pentru verificare)
01  76  Semiprim
02  23  Superprim
03  48  Supercompus
05  19  Prim */
