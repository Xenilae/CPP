#include <iostream>
#define TMAX 55
using namespace std;

int main()
{
    int n = 10; // Numarul de zile
    int temp;
    int minim, maxim;
    int diference;
    float media;
    int negative, zerouri, pozitive, neutru = 0;
    int canicula, cald, moderat, racoare, frig, ger;
    cout << "Proiect nr.1 elaborat de Costiuc Igor" << endl;
    cout << "Tema: Temperaturile într-o luna calendaristica\n";
    // 1. Cea mai mică și cea mai mare temperatură
    cout << "Cate zile? ";
    cin >> n;
    cout << "Introduceti " << n << " temperaturi: ";
    media = 0;
    maxim = -TMAX;
    minim = +TMAX;
    negative = zerouri = pozitive = 0;

    for (int i = 1; i <= n; i++){
          cin >> temp;
           if (temp > maxim) maxim = temp;
          media += temp;
          if (temp < minim) minim = temp;
          if (temp < neutru) negative++;
          else
            if (temp > neutru) pozitive++;
          else
            zerouri++;
    }


    media /= n;


    diference = maxim - minim;
    cout << "1. \t Temperatura maxima este " << maxim << endl;
    cout << "\t Temperatura minimă este " << minim << endl;
    cout << "2.\t Diferența: " << diference << endl;
    cout << "3.\t Temperatura media este " << media << endl;
    cout << "4.\t In " << negative << " zile temperatura a fost sub " << neutru << endl;
    cout << "\t In " << pozitive << " zile temperatura a fost peste " << neutru << endl;
    cout << "\t In " << zerouri << " zile temperatura a fost = " << neutru << endl;
    return 0;

}

