#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"
void GenerationCode(int iChoixAllumeLed, int iChoixLed, char *arduino){
    
            if (arduino != NULL){//vérification de la création du fichier
                        fprintf(arduino, "#include<Arduino.h>\n\nint iChoix = %d;\n", iChoixAllumeLed);// édition du param.h avec les coordonnéesnécessaires
                        fprintf(arduino, "int iChoixLed = %d;\n", iChoixLed);
                        fclose(arduino);
                        printf("Le message à bien été inclus.\n");
            }else{// On affiche un message d'erreur si on veut
                        printf("Impossible d'ouvrir le fichier text.\n");
            }
}
