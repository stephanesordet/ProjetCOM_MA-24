#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VALEUR_INIT 0

void entreeUtil();

int main()
{
    char entree[16] ="";
    int tailleChaine = 0;
    int choixmenu=VALEUR_INIT;
    printf("Bonjour, ce programme est la pour vous familliarisez avec la manipulation de chaines de caracteres.\n\n");
    printf("Choix 1\n");
    printf("Choix 1\n");
    printf("Choix 1\n");
    printf("Choix 1\n");
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

        break;
    case 3:

        break;
    case 4:

        break;
    default:

        break;
    }
    return 0;
}
void entreeUtil()
{
    char entree[16] ="";
    int tailleChaine = 0;
    do {
        printf("Entrez une chaine de caracteres (max. 15): ");
        scanf("%s",&entree);
        printf("%s\n",entree);
        tailleChaine = strlen(entree);
    } while (tailleChaine>15);
}
