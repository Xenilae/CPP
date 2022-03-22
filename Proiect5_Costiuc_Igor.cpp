#include <iostream>
#include <string.h>
#include <cstdlib>
#include <conio.h>
//6/16
using namespace std;
int NrCuvinte(char sir[]);
int CuvintePalindroame(char sir[]);
int CuvinteLungMin16(char sir[]);
int NrCuvinte();
int CuvintePalindroame();
int CuvinteLungiMin16(char sir[]);
int TransferCuvinteLungMin16(char sir[]);
int EliminaCuvinteLungMin5(char sir[]);
void ViewFile(char nume[]);
void CopiaRezerva(char nume[]);
int main ()
{   
    int opt;
    char frac[81] = "Ana Virlan prieteneste cu Ana Cabc iar Colea Cazac - nu"
    cout << "Proiect nr.5 elaborat de Costiuc Igor" << endl;
    cout << "Tema: Siruri!" << endl;
    do {
        cout << "\n 1. Numarul de cuvinte dintr-o fraza";
        cout << "\n 2. Cuvinte dintr-o fraza";
        cout << "\n 3. Cuvintele de lungime cel putin 16 litere dintr-o fraza";
        cout << "\n 4. Numarul cuvintelor dintr-un fisier";
        cout << "\n 5. Cuvinte dintr-o fraza";
        cout << "\n 6. Cuvintele de lungime cel putin 16 litere dintr-un fisier";
        cout << "\n 7. De scris in alt fisier cuvintele >= 16 caractere";
        cout << "\n 8. Copia de rezerva a fisierului";
        cout << "\n 0. Stop!";
        cout << "\n\n\t Alege de la 0 la 8";
        cin >> opt;
        switch(opt)
        {
            case 1;
        }   
        cout << "Click me"; getchar();
    }  while(opt);
        return 0;
}
int NrCuvinte(char sir[]) {
    return 1;
}
