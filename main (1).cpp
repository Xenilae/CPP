#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#define NMAX 100
using namespace std;
//interfata programului
//La intrare: n - dimensiunea tabloului; La iesire: a - tablou; F. intooarce 1/0 succes/eroare
int Citire(int n, int a[]);
//La intrare: n - dimensiunea tabloului; sir - mesaj; a - tablou
void Afisare(int n, int a[], char sir[]);

void Afisare(int n, int a[], char b[10][20]);
//La intrare: n - dimensiunea tabloului; a - tablou; La iesire F. intooarce elem. minim
int Minimum(int n, int a[]);
//La intrare: n - dimensiunea tabloului; a - tablou; La iesire F. intooarce elem. minim
int Maximum(int n, int a[]);
//La intrare: n - dimensiunea tabloului; a - tablou; La iesire F. intooarce media
double Media(int n, int a[]);
//La intrare: n - dim. tabloului; a - tablou; La iesire a - tablou; F. intooarce 1/0
int Aranjare(int n, int a[]);
//La intrare: n - dim. tabloului; a - tablou; La iesire a - tablou; F. intooarce 1/0
int Rotire(int n, int a[]);
//La intrare: n - dim. tabloului; a - tablou, val - val. adaugata; La iesire: n; a - tablou; F. intooarce 1/0
int Inserare(int *n, int a[], int val);
//La intrare: n; a, val - val. cautata; La iesire: F. intooarce pozitia / n (nu-i)
int Cautare(int n, int a[], int val);
//La intrare: n - dim. tabloului; a - tablou, val - val. adaugata; La iesire: n; a - tablou; F. intooarce 1/0
int Stergere(int &n, int a[], int val);
int Clasificare(int n, int a[], int m, int b[]);
int Generare(int n, int a[]);

int main()
{
    int opt;
    int n = 50, poz = 5, m = 4;
    int note[NMAX] = {5, 6, 1, 7, 8, 2, 4, 10, 3, 9};
    char nume[][20] = {"restantieri", "mediocri", "proeminenti", "eminenti"};
    int categorii[] = {0, 0, 0, 0};
    cout << "Cite note? "; cin >> n;
    Citire(n, note);
    do
    {
        cout << "Proiect nr. 3, elaborat de mine!" << endl;
        system("cls");
        cout << "\n1. Minimum/Maxim";
        cout << "\n2. Media";
        cout << "\n3. Aranjare";
        cout << "\n4. Rotire";
        cout << "\n5. Inserare";
        cout << "\n6. Stergere";
        cout << "\n7. Clasificare";
        cout << "\n8. Generare";
        cout << "\n0. Stop";
        cout << "\n\n\t Alege (de la 0 la 8): "; cin >> opt;
        switch(opt)
        {
            case 1:
                Afisare(n, note, "initial");
                cout << "\n Cel mai mic element este: " << Minimum(n, note);
                cout << "\n Cel mai mare element este: " << Maximum(n, note);
            break;
            case 2:
                Afisare(n, note, "initial");
                cout << "\n Nota medie este: " << Media(n, note);
            break;
            case 3:
                Afisare(n, note, "initial");
                Aranjare(n, note);
                Afisare(n, note, "aranjat");
            break;
            case 4:
                Afisare(n, note, "initial");
                Rotire(n, note);
                //Afisare(n, note, "rotit la stinga cu ", poz, " pozitii");
            break;
            case 7:
                Afisare(n, note, "initial");
                Clasificare(n, note, m, categorii);
                //Afisare(n, note, "rotit la stinga cu ", poz, " pozitii");
                Afisare(m, categorii, nume);

            break;
        }
        getch();
    } while(opt);
    return 0;
}
int Citire(int n, int a[])
{
    int key;
    int i;
    cout << "\n 1. De la tastatura";
    cout << "\n 2. De generat aleator";
    cout << "\n 3. De generat intr-un mod special";
    cout << "\n 4. Din fisier";
    cout << "\n 5. Implicit";
    cout << "\n\n\t Alege -> "; cin >> key;
    switch(key) {
        case 1:
            for(i=0; i<n; i++) {
                    cout << "Nota elevului cu nr. " << i+1 << ": ";
                    cin >> a[i];
            }
        break;
        case 2:
            for(i=0; i<n; i++)
                    a[i] = rand() % 7 + 4;
        break;
        case 3:
            for(i=0; i<n; i++)
                    a[i] = i % 7 + 4;
        break;
    }
    return 1;
}
void Afisare(int n, int a[], char sir[])
{
    int i;
    cout << "\n Tabloul " << sir << "\n";
    for(i=0; i<n; i++)
        cout << setw(8) << a[i];
    cout << endl;
}
void Afisare(int n, int a[], char b[10][20])
{
    int i;
    cout << "\n Tabloul pe categorii\n";
    for(i=0; i<n; i++)
        cout << "Sunt " << a[i] << " elevi in categoria " << b[i] << endl;
}
int Minimum(int n, int a[])
{
    int i, aux;
    if(n == 0) return 0;
    aux = a[0];
    for(i=1; i<n; i++)
        if(a[i] < aux) aux = a[i];
    return aux;
}
int Maximum(int n, int a[])
{
    int i, aux;
    if(n == 0) return 0;
    aux = a[0];
    for(i=1; i<n; i++)
        if(a[i] > aux) aux = a[i];
    return aux;
}
double Media(int n, int a[])
{
    int i;
    double aux = 0;
    for(i=0; i<n; i++)
            aux += a[i];
    aux /= n;
    return aux;
}
int Aranjare(int n, int a[])
{
    int i, k = 0;
    bool change;
    do {
        k++;
        change = false;
        for(i=0; i<n-k; i++)
            if(a[i] < a[i+1]) {
                swap(a[i], a[i+1]);
                change = true;
            }
    } while(change);
    return 1;
}
//1. Metoda bulelor de la stinga la dreapta
/*0. 5 3 6 8 9 7
1. 3 5 6 8 7 9
2. 3 5 6 7 8
3. 3 5 6 7 */
int Rotire(int n, int a[])
{
    int i, k, aux;
    if(n == 0) return 0;
    for(k=1; k<=5; k++)
    {
        aux = a[0]; // aux = a[n-1]
        for(i=0; i<n-1; i++) // for(i=n-1;  i>0; i--
            a[i] = a[i+1]; // a[i] = a[i-1]
        a[n-1] = aux; // a[0] = aux;
    }
    return 1;

}
int Inserare(int *n, int a[], int val)
{

    return 1;
}
int Cautare(int n, int a[], int val)
{

    return 1;
}
int Stergere(int &n, int a[], int val)
{

    return 1;
}
int Clasificare(int n, int a[], int m, int b[])
{
    int i, j;
    int limite[] = {4, 6, 8, 10};
    for(j=0; j<m; j++)
        b[m] = 0;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            if(a[i] <= limite[j]) { b[j]++; break; }
    return 1;
}
int Generare(int n, int a[])
{

    return 1;
}
