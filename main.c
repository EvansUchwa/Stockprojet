#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <errno.h>
#include "struct_et_prototype.h"

void finprog(){
    exit(0);
}
void menu (){
    int choix ;
      char reponse;

    do {
             system("COLOR 0c");

    printf("\n\n\n\n\n\n\n");
	printf("  \t \t \t      **     *********  *********  **********  **   ******   **       **\n");
	printf("   \t \t \t   ******   *********  *********  **********  **  ********  ***      **\n");
	printf("   \t \t \t  ********  **         **             **      **  **    **  ****     **\n");
	printf("   \t \t \t ***        **         **             **      **  **    **  ** **    **\n");
	printf("   \t \t \t **         *********  *********      **      **  **    **  **  **   **\n");
	printf("   \t \t \t **         *********  *********      **      **  **    **  **   **  **\n");
	printf("   \t \t \t **    ***  **                **      **      **  **    **  **    ** **\n");
	printf("   \t \t \t ***   ***  **                **      **      **  **    **  **     ****\n");
	printf("   \t \t \t  ********  *********  *********      **      **  ********  **      ***\n");
	printf("    \t \t \t  *****    *********  *********      **      **   ******   **       **\n");
	printf("\n\n\n\n\n\n\n");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("    \t \t \t                         ********    *********                         \n");
	printf("    \t \t \t                         *********   *********                         \n");
	printf("     \t \t \t                        **     ***  **                                \n");
	printf("     \t \t \t                        **     ***  **                                \n");
	printf("      \t \t \t                       **     ***  *********                         \n");
	printf("      \t \t \t                       **     ***  *********                         \n");
	printf("      \t \t \t                       **     ***  **                                \n");
	printf("     \t \t \t	                     **     ***  **                                \n");
	printf("       \t \t \t                      *********   *********                         \n");
	printf("       \t \t \t                      ********    *********                         \n");
	printf("\n\n\n\n\n\n\n");
	Sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t \t \t **         ******    *******   ********** ********  **   ******    **       ** \n");
	printf("\t \t \t**        *********  *******   ********** ********  **  ********   ***      ** \n");
	printf("\t \t \t**        **     **  **        **      **    **     **  **    **   ***      ** \n");
	printf("\t \t \t**        **     **  **        **      **    **     **  **    **   ** **    ** \n");
	printf("\t \t \t**        **     **  **        **********    **     **  **    **   **  **   ** \n");
	printf("\t \t \t**        **     **  **        **      **    **     **  **    **   **   **  ** \n");
	printf("\t \t \t**        **     **  **        **      **    **     **  **    **   **    ** ** \n");
	printf("\t \t \t**        **     **  **        **      **    **     **  **    **   **     **** \n");
	printf("\t \t \t******    *********  ******    **      **    **     **  ********   **      *** \n");
	printf("\t \t \t******     *******   *******   **      **    **     **   ******    **       ** \n");
	printf("\n\n\n\n\n\n\n");
	Sleep(1000);
system("cls");

system("COLOR 1E");

printf("\n\n\n\n                 GESTION LOCATION DE VOITURE V1.0\n\n");printf("\n\n");
	for(int s=0;s<80;s++)
			putchar(660);
	printf("\n");
        printf("                      ________________                           \n");
		printf("                    /                 \____ --<---<---<--             \n");
		printf("             _ ___/    ____________        | --<---<---<--            \n");
		printf("            |__ __     |           | ______|--<---<---<--         \n");
	    printf("                  (__)----------(__)                             \n");
		for(int z=0;z<80;z++)
			putchar(660);printf("\n\n");
        printf("                       Developpee par:Groupe 4(du groupe 2)  Cerco                      \n\n\n");


    printf("\n\n\n\tChargement");
	for(int i=1;i<36;i++)
	{

		Sleep(50);//attente
			printf(".");

	}
	system("cls");



             system("cls");
    printf("Bonjour voici notre petit programme qui regroupe ltout les exercices traité jusquici!!\n");
     printf("================================== Menu ============================================== \n \n \n");

      printf("1-Louer une voiture \n");
      printf("2-Retour d'une voiture \n" );
      printf("3-Etat d'une voiture \n");
      printf("4-Etat du parc de voiture \n");
      printf("5-Sauvegarder l'etat du parc \n");
      printf("6-Fin du programme \n");



    do {

            printf("Veuillez choisir une option");
    scanf("%d",&choix);}
    while(choix < 0 || choix>13);
        switch(choix){
            case 1: louer_voiture();
            break;
            case 2: retourvoiture();
            break;
            case 3: recherche_affichage();
            break;
            case 4: Etat_parc();
            break;
            case 5: sauvegarde();
            break;
            case 6:finprog();
            break;


        }

    printf("Voulez vous continuez O/N \n\n");
    scanf(" %c",&reponse);
    }
    while ( reponse == 'o' || reponse == 'O');
    printf(" merci pour votre colaboration\n");
}





int main()
{


        menu();





    return 0;
}
