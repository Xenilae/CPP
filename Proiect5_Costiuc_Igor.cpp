#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Sportsman {
    int id;
    char name[30];
    int birthDay;
    int birthMonth;
    int birthYear;
    char discipline[30];
    int height;
    int weight;
};

int main()
{
    char edit[2];
    char editProperty[20];
    struct Sportsman Sportsman;

  printf("Enter Sportsman's ID, name, birthDay, birthMonth, birthYear, discipline, height, weight :\n");
  scanf(
        "%d %s %d %d %d %s %d %d", 
        &Sportsman.id,
        Sportsman.name,
        &Sportsman.birthDay,
        &Sportsman.birthMonth,
        &Sportsman.birthYear,
        Sportsman.discipline,
        &Sportsman.height,
        &Sportsman.weight
    );

    FILE *fptr;

    if ((fptr = fopen("/Applications/code/programare-structurata/laborator-6/index.bin", "wb+")) == NULL){
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    fwrite(&Sportsman, sizeof(struct Sportsman), 1, fptr); 

    fread(&Sportsman, sizeof(struct Sportsman), 1, fptr); 
    printf("ID: %d\nName: %s\nBirth: %d.%d.%d \nDiscipline: %s\nHeight: %d\nWeight: %d\n",
        Sportsman.id,
        Sportsman.name,
        Sportsman.birthDay,
        Sportsman.birthMonth,
        Sportsman.birthYear,
        Sportsman.discipline,
        Sportsman.height,
        Sportsman.weight
    );

    fclose(fptr);

    return 0;
}