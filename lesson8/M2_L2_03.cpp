//
// Created by Nicolae Spinu on 19.03.2021.
//

#include "iostream"

using namespace std;

int main() {
    int counter = 0, max = 0, i = 0;
    char ch[300];
    scanf(" %[^\n]s", ch);
    while (ch[i] != '\0') {
        if ((ch[i] != ' ')) {
            counter++;
        } else {
            max = max < counter ? counter : max;
            counter = 0;
        }
        i++;
    }
    cout << max << endl;
    return 0;
}
/**
 *  Sunt in sedintsa sun mai tarziu //8
 *  Scrie un mesaj // 5
 *  Transferati 100 de piastri // 11
 *  Numarul meu este 37348818838 // 11
 *  ok // 2
 * Enunț
   În Quantumstan costul unui mesaj SMS este determinat de lungimea cuvintelor care îl formează.
   Mai exact, mesajul costă atâtea unități monetare, câte simboluri se conțin în cel mai lung cuvânt din el.
   Scrie un program pentru determinarea costului mesajelor formate din cuvinte separate prin câte un spațiu.
   Lungimea mesajului nu depășește 300 simboluri
   Input
   Un șir de caractere reprezentând textul mesajului SMS se introduce din inputul standard.
   Output
   În outputul standard se afișează un număr întreg – costul mesajului (numărul de simboluri din cel mai
   lung cuvânt din mesaj)
 */