#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VALEUR_INIT 0

void entreeUtil();
char entree[21] ="";
int main()
{

    char entree2[21] ="", copie[21]="";
    int tailleChaine,tailleChaine2 =VALEUR_INIT;
    int choixmenu=VALEUR_INIT;
    printf("Bonjour, ce programme est la pour vous familliarisez avec la manipulation de chaines de caracteres.\n\n");

    printf("\nChoix 1: Calcule taille chaine\n");
    printf("Choix 2: Concatenation de 2 chaines\n");
    printf("Choix 3: Copie d'une chaine de caractere\n");
    printf("Choix 4: Comparaison de 2 chaines\n");
    printf("Choisissez une option svp: ");
    scanf("%i",&choixmenu);
    system("cls");

    switch (choixmenu)
    {
    case 1:
        entreeUtil();
        printf("Votre entree contient %i caractères",tailleChaine);

        break;
    case 2:
        entreeUtil();

        do {
        printf("Entrez la chaie a concatener (max. 20): ");
        scanf("%s",&entree2);
        tailleChaine2 = strlen(entree2);
    } while (tailleChaine2>20);

        strcat(entree, entree2);
        printf("%s",entree);

        break;
    case 3:
        entreeUtil();
        strcpy(copie, entree);
        printf("Votre entree vaut : %s\n", entree);
        printf("La copie vaut : %s", copie);
        break;
    case 4:
        entreeUtil();

        do {
        printf("Entrez la chaie a concatener (max. 20): ");
        scanf("%s",&entree2);
        tailleChaine2 = strlen(entree2);
        } while (tailleChaine2>20);
        if(strcmp(entree, entree2)==0){
            printf("Les chaines sont identiques\n");
        }
        else{
            printf("les chaines sont differentes\n");
        }
        break;
    default:

        break;
    }
    return 0;
}
void entreeUtil()
{

    int tailleChaine = 0;
    do {
        printf("Entrez une chaine de caracteres (max. 20): ");
        scanf("%s",&entree);
        tailleChaine = strlen(entree);
    } while (tailleChaine>15);
}
