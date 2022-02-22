#include <iostream>

using namespace std;

int main()
{
    int temp1, temp2;
    int minim, maxim;
    int diference;
    float media;
    cout << "Proiect nr.1 elaborat de Costiuc Igor" << endl;
    cout << "Tema: Temperaturile într-o lună calendaristică\n";
    // 1. Cea mai mică și cea mai mare temperatură
    cout << "Introduceți un număr natural: ";
    cin >> temp1 >> temp2;
      if (temp1 > temp2) {
        minim = temp2;
        maxim = temp1;
      } else {
        minim = temp1;
        maxim = tara2;
      }
      diference = maxim - minim;
      media = (float)(tara + tara2)/2;
        cout << "1. \t Temperatura maxima este" << maxim << endl;
        cout << "Temperatura minimă este" << minim << endl;
        cout << "2.\t Diferența: " << diference << endl;
        return 0
};
