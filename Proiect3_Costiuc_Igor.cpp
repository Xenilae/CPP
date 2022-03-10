#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>

#define NMAX 100
using namespace std;
// Interfata programului
int Citire(int n, int a[]); // La intrare: n - numarul de elemente; La iesire: a - tabloul de temp e; Functia intoarce: 1 - OK; 0 - Eroare
void Afisare(int n, int a[], char s[]); // La intrare: n - numarul de elemente, a - tabloul de note;
int Minimum(int n, int a[]);  // La intrare: n - numarul de elemente, a - tabloul de note; La iesire: valoare minima
int Maximum(int n, int a[]);  // La intrare: n - numarul de elemente, a - tabloul de note; La iesire: valoare maxima
float Media(int n, int a[]); // La intrare: n - numarul de elemente, a - tabloul de note; La iesire: nota medie
int Sortare(int n, int a[]); // La intrare: n - numarul de elemente, a - tabloul de note; La iesire: a - tabloul aranjat; Functia intoarce: 1 - OK; 0 - Eroare
int Rotire(int n, int a[]); // La intrare: n - numarul de elemente, a - tabloul de note; La iesire: a - tabloul rotit; Functia intoarce: 1 - OK; 0 - Eroare
int Adaugare(int &n, int a[], int val); // La intrare: n - numarul de elemente, a - tabloul de note, val - elementu adaugat; La iesire: n - mareste cu 1, a - tablou
int Adaugare(int &n, int a[], int val, char);
int Adaugare(int &n, int a[], int val, int p);
int Adaugare(int &n, int a[], int val, int p, char);
int Cautare(int n, int a[], int val); // La intrare: n - numarul de elemente, a - tabloul de note, val - elementu adaugat; La iesire: p - pozitia sau -1
int Stergere(int &n, int a[], int val); // La intrare: n - numarul de elemente, a - tabloul de note, val - elementu adaugat; La iesire: n - mareste cu 1, a - tablou
int Clasificare(int n, int a[], int m, int b[]); // La intrare: n - numarul de elemente, a - tabloul de note, m - numarul de clasificari; La iesire: b - tabloul nou
int Generare(int n, int a[]); // La intrare: n - numarul de elemente; La iesire: a - tabloul de note; Functia intoarce: 1 - OK; 0 - Eroare
int main()
{
    int key;
    int n = 10;
    int ncaut;
    int temp[NMAX] = { 8, -1, -20, 30, 4, 5, 3, 11, 6, 9 }; 
    int val, val2;
    //Citire(n, note);
    cout << "Tabloul de temperaturi ocupa: " << sizeof(temp) << " Bt" << endl;
    do
    {
        system("cls");
        cout << "Proiect nr.3 elaborat de Costiuc Igor" << endl;
        cout << "Tema: Notele studentilor" << endl;
        cout << "\n1. De determinat intr-un tabel de valori temperatura minima si maxima";
        cout << "\n2. De determinat intr-un tabel de valori temperatura medie";
        cout << "\n3. De aranjat un tabel de valori in ordine descrescatoare";
        cout << "\n4. De efectuat rotirea la stanga a elementelor tabelului de 6 ori";
        cout << "\n5. De adaugat date in tabelul de temperaturi";
        cout << "\n6. De sters date din tabelul de temperaturi";
        cout << "\n7. Clasificare";
        cout << "\n8. Generare";
        cout << "\n0. Stop";
        cout << "\n\n\t Alegeti de la 0 la 8 -> ";
        cin >> key;
        switch(key)
        {
            case 1:
                Afisare(n, temp, "initial");
                cout << "\nCea mai mica temperatura este: " << Minimum(n, temp);
                cout << "\nCea mai mare temperatua este: " << Maximum(n, temp);
            break;
            case 2:
                Afisare(n, temp, "inital");
                cout << "\nTemperatura medie este: " << Media(n, temp);
            break;
            case 3:
                Afisare(n, temp, "inital");
                Sortare(n, temp);
                Afisare(n, temp, "aranjat");
            break;
            case 4:
            Afisare(n, temp, "inital");
            Rotire(n, temp);
            Afisare(n, temp, "rotit");
            break;
            case 5:
                Afisare(n, temp, "inital");
            cout << "\n Indica valoarea adaugata: "; cin >> val;
            cout << "\n In fata carei valori? "; cin >> val2;
            Afisare(n, temp, "inital");
            if((ncaut = Cautare(n, temp, val2)) > -1)
                    Adaugare(n, temp, val, ncaut);
                else //cout << "\n Nu este elementul " << val2;
                    Adaugare(n, temp, val, 'p');
                Afisare(n, temp, "Adaugat");
            break;
        case 6:
            cout << "\n Introduceti ce valoare trebuie de sters: ";
            cin >> ncaut;
            if ((val = Cautare(n, temp, ncaut)) != -1)
            Stergere(n, temp, /*val*/Cautare(n, temp, ncaut));
            Afisare(n, temp, "sters");
            break;
        }
        getch();
    } 
    while(key);
    return 0;
}
int Citire(int n, int a[])
{
   return 1;
}
void Afisare(int n, int a[], char s[])
{
    cout << "\nTabloul de temperatur " << s << " \n";
    for (int i = 0; i < n; i++)
        cout << setw(12) << a[i];
    cout << endl;
}
int Minimum(int n, int a[])
{
    int aux = a[0];
    if(n <= 0) return 0;
    for (int i = 1; i < n; i++)
        if(a[i] < aux) aux = a[i];
    return aux;
}
int Maximum(int n, int a[])
{
    int aux = a[0];
    if(n <= 0) return 0;
    for (int i = 1; i < n; i++)
        if(a[i] > aux) aux = a[i];
    return aux;
}
float Media(int n, int a[])
{
    int aux = 0;
    if(n <= 0) return 0;
    for (int i = 1; i < n; i++)
        aux += a[i];
    aux /= n;
    return aux;
}
int Sortare(int n, int a[])
{
    int k = 0, aux;
    bool change;
    do
    {
        change = false; k++;
        for (int i = 0; i < n-k; i++)
            if(a[i] < a[i+1])
            {
                aux = a[i];
                a[i] = a[i+1];
                a[i+1] = aux;
                change = true;
            }
    } while(change);
    return 1;
}
int Rotire(int n, int a[])
{

     int i, b[NMAX];
    for ( i = 0; i < 3; i++ )
        b[i] = a[i];
    for( i = 3; i < n; i++)
        a[i-3]=a[i];
    for ( i = n - 3; i < n ; i++)
        a[i]=b[i- n + 3 ];
    return 1;
}

int Adaugare(int &n, int a[], int val)
{
        for (int i = n; i > 0 ; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
        n++;
}
int Adaugare(int &n, int a[], int val, char)
{
        a[n++] = val;
        return 1;
}
int Adaugare(int &n, int a[], int val, int p)
{
        for (int i = n; i > p; i--)
        {
            a[i] = a[i - 1];
        }
        a[p] = val;
        n++;
}
int Adaugare(int &n, int a[], int val, int p, char)
{
       for (int i = n; i > 0 ; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
        n++;
}

int Cautare(int n, int a[], int val )
{
    for ( int i = 0; i <= n; i++)
    {
        if (a[i] == val )
            return i;
    }
    return -1;
}
int Stergere(int &n, int a[], int val)
{
    if (val != -1)
    {
        for (int i = val; i <= n; i++)        
            a[i] = a[i+1];
    }

    return 1;
}
int Clasificare(int n, int a[], int m, int b[] )
{
    return 1;
}
int Generare(int n, int a[] )
{
    return 1;
}