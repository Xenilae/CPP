#include <iostream>
#include <iomanip>
#include <string.h>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <fstream>
//#include <conio.h>
#define NMAX 20
#define LMAX 180
using namespace std;
//Interfata
//->Program
int NrCuvinte(char sir[]);
int LungimeaMaxima(char sir[]);
int CuvinteIncep(char sir[]);
//->Fisier
int ViewFile(char nume[]);
void CopiaRezerva(char nume[]);
int NrCuvinte(char sir[]);
int LungimeaMaxima(char sir[]);
int CuvinteIncep(char sir[]);
int TransferLungimeaMaxima(char sir[]);
int EliminaLungimeaMaxima(char sir[]);

int main()
{
     int key;
     ifstream inFile;
    char fraza [81] = "Ana Virlan  prieteneste cu Ana CABAC, iar Colea CAZAC - nu.";
	cout << "Project Nr.5 elaborat de Costiuc Igor"<< endl;
	cout << "Tema: ŞIRURI DE CARACTERE."<< endl;
	do{
	cout << "\n 1.Numarul de cuvinte dintr-un fraza:";
	cout << "\n 2.Cuvintele -palindrome dintro-fraza.";
	cout << "\n 3.Cuvintele de lungime cel putin 5 litere dintro fraza";
	cout << "\n 4.Numarul de cuvinte dintr-un fisier.";
	cout << "\n 5.Cuvintele - palindrome dintrun fisier";
	cout << "\n 6.Cuvintele de lungime putin 5 linetere dint-un fisier";
	cout << "\n 7.De inscris  in alt fisier cuvintele de lungimi > 5 caractere";
	cout << "\n 8.De sters cuvintele de lungime  >5 litere dentr-un fisier";
	cout << "\n 9.Stop";
	cout << "\n\n\t Alegeti (de la 0 la 9)";
        cin >> key;
        switch(key)
        {
            case 1:
                cout << "Fraza initiala \n";
                puts(fraza);
                if (NrCuvinte(fraza) != 0)
                    cout << "In total " << NrCuvinte(fraza) << " cuvinte" << endl;
                else
                    cout << "Nu-s cuvinte";
            break;
            case 2:
                cout << "Fraza initiala \n";
                puts(fraza);
                if (NrCuvinte(fraza) !=  0)
                    LungimeaMaxima(fraza);
                else
                    cout << "Nu-s cuvinte" << endl;
                //LungimeaMaxima(fraza);
            break;
            case 3:
                cout << "Fraza initiala \n";
                puts(fraza);
                if (NrCuvinte(fraza) != 0)
                    CuvinteIncep(fraza);
                else
                    cout << "Nu-s cuvinte";
            break;
            case 4:
                cout << "Fraza initiala din fisier: \n";
                ViewFile("fraza.in");
            break;
            case 5:

            break;
            case 6:

            break;
            case 7:

            break;
            case 8:

            break;
            case 9:

            break;
        }
        fflush(stdin); // Ochistka bufera
        cout << "Apasa enter: " << getchar();
    } while(key);

    return 0;
}

int NrCuvinte(char sir[])
{
    char copia[81], *cuvint;
    int n = 0;
    strcpy(copia, sir);
    if ((cuvint = strtok(copia, " ,.:\n\t-")) == NULL) return 0;
    n = 1;
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
        n++;
    return n;
}
int LungimeaMaxima(char sir[])
{
    char copia1[81], copia2[81], *cuvint;
    int maxim = 0;
    strcpy(copia1, sir);
    strcpy(copia2, sir);
    if ((cuvint = strtok(copia1, " ,.:\n\t-")) == NULL) return 0;
    maxim = strlen(cuvint);
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
    {
        if (strlen(cuvint) >= maxim)
        {
            maxim = strlen(cuvint);
        }
    }
    cout << "Cuvintul/ele cu lungimea maxima: ";
    if ((cuvint = strtok(copia2, " ,.:\n\t-")) == NULL) return 0;
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
    {
        if(strlen(cuvint) == maxim) cout << cuvint << " ";
    }

    return 1;
}
int CuvinteIncep(char sir[])
{
    char copia[81], *cuvint;
    char litere[NMAX];
    int i = 0, val;
    cout << "Cate litere vor fi: ";
    cin >> val;
    cout << "Introduceti litere necesare:\n";
    for (i = 0; i < val; i++)
    {
        cout << "Litera " << i + 1 << " : ";
        cin >> litere[i];
    }
    strcpy(copia, sir);
    cout << "Cuvintele care incep cu o litera din intervalul dat:\n\t";
    if ((cuvint = strtok(copia, " ,.:\n\t-")) == NULL) return 0;
    for (i = 0; i < val; i++)
    {
        if (cuvint[0] == litere[i])
            cout << cuvint << ", ";
    }
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
    for (i = 0; i < val; i++)
    {
        if (cuvint[0] == litere[i])
            cout << cuvint << ", ";
    }
     //cout << cuvint[0] << endl;
    return 1;
}
//-> Fisier
int ViewFile(char nume[])
{
    FILE *f;
    char sir [LMAX];
    f = fopen("FILE.txt", "r");
    while (fgets(sir, LMAX-1, f) != NULL)
        cout << sir;
    fclose(f);
}
void CopiaRezerva(/*char nume[]*/)
{

}
int NrCuvinte(/*char sir[]*/)
{
    return 1;
}
char* LungimeaMaxima(/*char sir[]*/)
{
//    return 1;
}
int CuvinteIncep(/*char sir[]), char litera*/)
{
    return 1;
}
int TransferLungimeaMaxima(/*char sir[]*/)
{
    return 1;
}
int EliminaLungimeaMaxima(/*char sir[]*/)
{
    return 1;
}