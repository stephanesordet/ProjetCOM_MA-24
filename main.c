#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VALEUR_INIT 0
#include <windows.h>

void entreeUtil();
char entree[21] ="";//Création d'une variable globale
int main()
{

    char entree2[41] ="", copie[21]="";
    int tailleChaine,tailleChaine2, nbCar =VALEUR_INIT;
    int choixmenu=VALEUR_INIT;

    do {//Boucle générale du programme
    printf("Bonjour, voici differentes manipulations que vous pouvez effectuer avec des chaines de caracteres.\n\n");
    //Choix à disposition de l'utilisateur
    printf("\nChoix 1: Calcule de la taille d'une chaine\n\n");
    printf("Choix 2: Concatenation de 2 chaines\n\n");
    printf("Choix 3: Copie d'une chaine de caractere\n\n");
    printf("Choix 4: Comparaison de 2 chaines\n\n");
    printf("Choix 5: Quitter le programme\n\n");

    printf("Choisissez une option svp: ");
    scanf("%i",&choixmenu);
    system("cls");

    switch (choixmenu)
    {
    case 1:
        entreeUtil();
        nbCar = strlen(entree);
        printf("Votre entree contient %i caracteres",nbCar);
        Sleep(3000);
        system("cls");
        break;
    case 2:
        //Cette fonction concatene 2 chaines de caracteres
        entreeUtil();
        do {
        printf("Entrez la chaine a concatener (max. 20): ");
        scanf("%s",&entree2);
        tailleChaine2 = strlen(entree2);//Cotrole que l'utilisateur n'entre pas plus de 20 caracteres
    } while (tailleChaine2>20);

        strcat(entree, entree2);//strcat prend en parametres les 2 chaines à concatener, en commencant par le 1er parametre
        printf("Voici votre nouvelle chaine : %s",entree);
        Sleep(3000);
        system("cls");
        break;
    case 3:
        //Cette fonction copie la chaine "entree"
        entreeUtil();
        strcpy(copie, entree);//Le parametre "copie" stocke la valeur de entree
        printf("Votre entree vaut : %s\n", entree);
        printf("La copie vaut : %s", copie);
        Sleep(5000);
        system("cls");
        break;
    case 4:
        //Cette fonction compare 2 chaines de caracteres
        entreeUtil();
        do {
        printf("Entrez la chaine a comparer (max. 20): ");
        scanf("%s",&entree2);
        tailleChaine2 = strlen(entree2);
        } while (tailleChaine2>20);
        if(strcmp(entree, entree2)==0){//strcmp renvoie 0 si les chaines sont identiques
            printf("Les chaines sont identiques\n");
        }
        else{
            printf("les chaines sont differentes\n");
        }
        Sleep(4000);
        system("cls");
        break;
    case 5:
        break;
    default:

        break;
    }
    } while (choixmenu !=5);//Condition d'arret du programme

    fflush(stdin);
    return 0;
}
void entreeUtil()//Cette fonction controle que l'utilisateur n'entre pas plus de 20 caracteres
{

    int tailleChaine = VALEUR_INIT;
    do {//On reste dans la boucle tant que l'utilisateur entre plus de 20 caracteres
        printf("Entrez une chaine de caracteres (max. 20): ");
        scanf("%s",&entree);
        tailleChaine = strlen(entree);
    }while (tailleChaine>20);
}
