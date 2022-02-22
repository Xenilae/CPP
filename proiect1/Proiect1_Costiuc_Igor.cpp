#include <iostream>

using namespace std;

int main()
{
    int temp1, temp2;
    int minim, maxim;
    int diference;
    float media;
    cout << "Proiect nr.1 elaborat de Costiuc Igor" << endl;
    cout << "Tema: Temperaturile într-o luna calendaristica\n";
    // 1. Cea mai mică și cea mai mare temperatură
    cout << "Introduceti doua temperaturi: ";
    cin >> temp1 >> temp2;
    if (temp1 > temp2)
    {
        minim = temp2;
        maxim = temp1;
    }
    else
    {
        minim = temp1;
        maxim = temp2;
    }
    diference = maxim - minim;
    media = (float)(temp1 + temp2)/2;
    cout << "1. \t Temperatura maxima este " << maxim << endl;
    cout << "\t Temperatura minimă este " << minim << endl;
    cout << "2.\t Diferența: " << diference << endl;
    return 0;
}
