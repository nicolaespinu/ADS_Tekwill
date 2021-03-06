//
// Created by Nicolae Spinu on 05.03.2021.
//


#include "iostream"

using namespace std;

long power2(int n) {
    if (n == 0) return 1;
    else return power2(n - 1) * 2;
}

int main() {
    int k;
    cout << "Introduceti numarul de jocurilor  de astazi: " << endl;
    cin >> k;
    cout << power2(k);
    return 0;
}

//    Enunț
//        În fiecare sâmbătă John Sparrow merge la casino. El joacă un singur joc de noroc – quantumpoker,
//        pornind de la o miză de 2 piaștri quantumstanezi. Dacă câștigă jocul – pleacă.
//        Dacă însă pierde – joacă din nou, dublând miza. John joacă până la primul câștig.
//        Se știe că astăzi John a jucat K jocuri.
//    Scrie un program, care va calcula miza în ultima partidă jucată de John.
//    Folosește funcția recursivă, care calculează 2n.
//
//
//Input
//        Din inputul standard se citește un număr întreg, K – numărul de partide jucate de
//        John.(0 < K < 30)
//
//Output
//        În output-ul standard se înscrie un număr întreg, pozitiv – valoarea mizei în ultima partidă jucată de John.

/*
Id_test Date de intrare Rezultat (pentru verificare)
01 1   2
02 10 1024
03 5  32
04 20 1048576
05 30 1073741824
06 9  512
07 12 4096*/
