//
// Created by Nicolae Spinu on 19.03.2021.
//
#include "iostream"

using namespace std;

int main() {
    int i = 0;
    char ch[30], rch[30];
    scanf(" %[^\n]", ch);
    while (ch[i] != '\0') {
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            rch[i] = (char) (ch[i] + (25 - 2 * (25 - ('Z' - ch[i]))));
        } else {
            rch[i] = ch[i];
        }
        i++;
    }
    cout << rch;
}
/*
 * POTCOAVA  KLGXLZEZ
 * QUANTUMSTAN  JFZMGFNHGZM
 * CALUL PASTE IARBA VERDE  XZOFO KZHGV RZIYZ EVIWV
 * ATACAM DIMINEATSA LA 4.00 ZGZXZN WRNRMVZGHZ OZ 4.00
 * OCUPATI POSTA SI TELEGRAFUL  LXFKZGR KLHGZ HR GVOVTIZUFO
 * Enunț
Pentru a transmite în siguranță mesaje secrete, ordinul tamplierilor folosea o
modificare a cirului Caesar, numită ”cifrul Tamplier”. Ea consta în înlocuirea simetrică a caracterelor
 majuscule din alfabetul englez: ’A’ - ’Z’, ’B’ - ’Y’, ’C’ - ’X’... și tot așa până la ’M’ - ’N’.
Scrie un program, care va decodifica mesajul codificat cu codul Tamplier.

Input
Din inputul standard se citește un număr întreg, K – numărul de partide jucate de John.(0 < K < 30)

Output
În output-ul standard se înscrie un număr întreg, pozitiv – valoarea mizei în ultima partidă jucată de John.
 */
