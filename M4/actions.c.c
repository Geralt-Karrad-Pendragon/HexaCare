#include <stdio.h>
#include <stdlib.h>
#include <sting.h>


// on ouvre le fichier csv
fichier = fopen("battement.csv","r");

struct donnees {
    char * temps;
    char * pouls;
};

file *f=NULL; //fichier en C
char *tab; //chaîne de caractères pour la lecture du tableau
int a = 0;//
int b = 0; //

int main(int argc, char *argv[])
