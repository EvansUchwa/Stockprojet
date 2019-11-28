#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <errno.h>

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

		Sleep(400);//attente
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
/*On definit une structure voiture ayant comme  variable :la marque ,le matricule ,le kilometrage et l'etat de la voiture  */
struct voiture  {
 char marque[21];
 long matricule;
 float kilometrage;
 char etat[21];
};

/*On renomme la structure voiture en Voiture */
typedef struct voiture Voiture;
/*On definit un objet vt qu'on utilisera pour faire appal au element de la structure */
Voiture vt;

/*On crée une fonction qui calculera le kilometrage moyen du parc et  on lui passe en parametre le nombre total de voiture du parc*/
float kilometrage_moyen(int ntv) {
/*On initialise une varialble kilometre moyen */
float kmy ;
/*On ouvre le fichier */
    FILE * listev;
    listev =fopen("parcv.txt","r");
    /*on initialise et on affecte une valeur a une variable sommme,somme represente la somme de tout les kilometrage du parc */
    float somme;
     somme=0;
     /*On créé une boucle qui aura a parcourir chaque ligne pour recupere le matricule de chaque vehicule */
     do{
    fscanf(listev,"%s          %ld         %f          %s\n",&vt.marque,         &vt.matricule,         &vt.kilometrage,           &vt.etat);
/*Ici  notre variable somme prendra sa valeur initiale + le kilometrage d'une voiture a chaque tour de la boucle */
   somme = somme +vt.kilometrage;
     } while(!feof(listev) );
/*On effectue le calcul du kilometrage moyen */
     kmy = somme/ntv;
/*On retourne la valeur du kilometrage moyen */
     return kmy;
}
/* */
void Etat_parc(){
    /* */
    int nf;
    nf=0;
/* */
    int ntvoiture;
    /* */
    ntvoiture = compteligne(ntvoiture);
    printf("Le parc automobile compte actuellemnt %d voitures \n",ntvoiture);
    /* */
   char test[8]="Louer";

   /* */
    FILE *listev;
    listev = fopen("parcv.txt","r");

    /* */
int nfl;
nfl=0;

printf("=========================================Liste  des matricules des voitures louer===================================================\n");
   /* */
    do{
    fscanf(listev,"%s          %ld         %f          %s\n",&vt.marque,         &vt.matricule,         &vt.kilometrage,           &vt.etat);

/* */
if(strcmp(vt.etat,test)==0){

    printf("RB %ld \n",vt.matricule);
    nfl++;

}

     } while(!feof(listev) );
     printf("============ \n");
     /* */
     printf("Nombre totale de voiture en location : %d voitures",nfl);

      /* */
      printf("Le kilometrage moyen sur ce parc est de %f Km", kilometrage_moyen(ntvoiture));


}
/*On créé une fonction qui comptera le nombrede ligne de notre fichier ce qui nous servira pour determiner le nombre total de voiture car dans notre fichier une ligne est equivalente a une voiture et ces caracteristique */
int compteligne(int nbligne){

/* */
int c;
/* */
nbligne=0;
FILE * listev;
/*On ouvre le fichier text */
listev=fopen("parcv.txt","r");
char test[20] = "Louer";

/* */
while ((c=fgetc(listev)) !=EOF ){
        fscanf(listev,"%s          %ld         %f          %s\n",&vt.marque,         &vt.matricule,         &vt.kilometrage,           &vt.etat);


/* */
     if (c='\n'){
        ++nbligne;
    }


}

/* */
return nbligne;

}

/*On créé une fonction permettant  de sauvegarder l'etat du parc automobile */
void sauvegarde() {

    char repsave;
    char savename[20];
    printf("Confirmez la sauvegarde!,tapez O/o pour oui et N/n pour non!");
    scanf(" %c",&repsave);
    printf("Veuillez entrez le nom du fichier dans lequel vous souhaitez effectuez la sauvegarde");
    scanf("%s",savename);

    /*On ouvre le fichier text */
      FILE *listev,*nvlistev;

   if (repsave =='o' || repsave == 'O'){
        /*On ouvre le fichier text */
    listev = fopen("parctemp.txt","r");
    nvlistev = fopen(savename,"w");

     /*On créé une boucle qui aura a parcourir chaque ligne de notre fichier tant qu'il y en a  */

    do{
             /*On copie tout les element de notre premier fichier vers undeuxieme fichier dont le nom aura éte lu par l'utilisateur au prealable  */
    fscanf(listev,"%s          %ld         %f          %s\n",&vt.marque,         &vt.matricule,         &vt.kilometrage,           &vt.etat);
    fprintf(nvlistev,"%s          %ld         %f          %s\n",vt.marque,         vt.matricule,         vt.kilometrage,           vt.etat);
    } while(!feof(listev));
     fclose(listev);
     fclose(nvlistev);
     remove("parctemp.txt");
     rename("parctemp.txt",savename);
     printf("Sauvegarde  reussi!");
     }
     else {printf("Sauvegarde  annulé");}

}


/*On créé une fonction permetant a l'utilisateur de resaisir le numero de matricule d'un vehicule tant que celui ci n'est pas repertorié dans sle fichier*/
int reprendrematricule (){
long matsaisie;
printf("\n Erreur! Le matricule entrer ne correspond a aucune voiture veuillez ressayez\t RB ");
scanf("%ld",&matsaisie);

return matsaisie;
}
int reprendrematricule_vlouer (){
long matsaisie;
printf("\n Erreur! Le matricule entrer ne correspond a aucune voiture louer veuillez ressayez\t RB ");
scanf("%ld",&matsaisie);

return matsaisie;
}
int reprendrematricule_vlibre (){
long matsaisie;
printf("\n Erreur! Le matricule entrer ne correspond a aucune voiture libre veuillez ressayez\t RB ");
scanf("%ld",&matsaisie);

return matsaisie;
}


/*On créé une fonction permettant d'effectuer la recherche du matricule d'un vehicule et de verifier si ce vehicule est bien louer */
int recherche_etat_Louer(long immatrech){
    char test[20] = "Louer";

    /*On ouvre le fichier text */
             FILE * listev;
    listev = fopen("parcv.txt","r");
   do{
    fscanf(listev,"%s          %ld         %f          %s\n",&vt.marque,         &vt.matricule,         &vt.kilometrage,           &vt.etat);

    if(immatrech == vt.matricule && strcmp(vt.etat,test)==0){
        fclose(listev);
        return 1;

    }
     } while(!feof(listev));
     fclose(listev);
     return-1;

}

/*On créé une fonction qui permettra a l'utilisateur de modifier l'etat d'une voiture depuis la console directement dans le fichier texte*/

/*On créé une fonction permettant d'effectuer la recherche du matricule d'un vehicule et de verifier si ce vehicule est bien libre*/
 int recherche_etat_libre(long immatrech){
     char test[20] = "Libre";

     /*On ouvre le fichier text */
             FILE * listev;
    listev = fopen("parcv.txt","r");
     /*On créé une boucle qui aura a parcourir chaque ligne de notre fichier tant qu'il y en a  */
   do{
    fscanf(listev,"%s          %ld         %f          %s\n",&vt.marque,         &vt.matricule,         &vt.kilometrage,           &vt.etat);

    if(immatrech == vt.matricule && strcmp(vt.etat,test)==0){
        fclose(listev);
        return 1;

    }
     } while(!feof(listev));
     fclose(listev);
     return-1;


}

/*On créé une fonction permettant de recherchez dans notre fichier le matricule d'une voiture*/
int rechercher_matriculev(long imatrech){
    /*On ouvre le fichier text */
FILE * listev;
    listev = fopen("parcv.txt","r");
   do{
    fscanf(listev,"%s          %ld         %f          %s\n",&vt.marque,         &vt.matricule,         &vt.kilometrage,           &vt.etat);

    if(imatrech == vt.matricule){
        fclose(listev);
        return 1;
    }
    }
    while(!feof(listev));
    fclose(listev);
    return -1;
}

/*On créé une fonction permettant de recherchez le matricule d'une voiture puis d'afficher les caracteristiques de celle ci.*/
void recherche_affichage (){
          printf("Veuillez entrez l'immatriculation de la voiture entré!");
     long matrech;
        scanf("%ld",&matrech);

        /*On ouvre le fichier text */
             FILE * listev;
    listev = fopen("parcv.txt","r");
    int v=0;

     /*On créé une boucle qui aura a parcourir chaque ligne de notre fichier tant qu'il y en a  */
   do{
    fscanf(listev,"%s          %ld         %f          %s\n",&vt.marque,         &vt.matricule,         &vt.kilometrage,           &vt.etat);

    if(matrech == vt.matricule){
       v =1;
        printf("Marque: %s \n",vt.marque);
        printf("Matricule: %ld \n",vt.matricule);
        printf("Kilometrage: %f \n",vt.kilometrage);
        printf("Etat: %s \n",vt.etat);

    }

     } while(!feof(listev));
     if (v == 0 ){
      printf("Voiture introubale");}
}

/*On créé une fonction permettant d'ajouter des voiture au parc automobile de notre fichier*/
void ajout_voiture(){
    Voiture *vtabl;
    int i;
    int nvlu;



    char rep ;
    printf("BonjourMonsieur/Madame voulez vous ajoutez des voitures? Si oui tapez O/o Si non tapez Nn : \t");
   scanf(" %c", &rep);

if (rep =='O' || rep =='o'){




/*On ouvre le fichier text */
    FILE * listev ;
    listev = fopen("parcv.txt","a+");


    if (listev!=NULL){



   printf("Veuillez entrez le nombre de voiture a inserez(Vous ne pouvez ajoutez que 2 voiture a la fois) \t :" );
   scanf("%d",&nvlu);

  vtabl = (Voiture*) malloc ( nvlu * sizeof (Voiture*));


for (i = 0 ; i<nvlu ; i++){



printf("Entrez les informations de chaque voiture \n");

printf("Marque de la voiture :  \t");
scanf("%20s",vtabl[i].marque);
printf(" Marque : %s \n \n" ,vtabl[i].marque);


printf("Matricule de la voiture :  \t RB ");
scanf("%ld",&vtabl[i].matricule);
printf(" Matricule :RB %ld \n \n" ,vtabl[i].matricule);

printf("Kilometrage de la voiture :  \t");
scanf("%f",&vtabl[i].kilometrage);
printf(" Kilometrage : %f \n \n" ,vtabl[i].kilometrage);

printf("Etat de la voiture :  \t");
scanf("%20s",vtabl[i].etat);
printf(" Etat : %s\n \n" ,vtabl[i].etat);

fprintf(listev,"%s          %ld         %f          %s\n",vtabl[i].marque,         vtabl[i].matricule,         vtabl[i].kilometrage,           vtabl[i].etat);
}

}
    }
}

/*On créé une fonction permettant  de gerer tout ce qui concerne le  depart(location) d'une voiture de notre parc*/
void louer_voiture(){
    long matlv;

    /*On ouvre le fichier text */
    FILE * listev;
    listev = fopen("parcv.txt","a");

/*On demande a l'utilisateur d'entre un numero de matricule  si ce numero est present dans notre parc on verifie ensuite si le numero entré correspond a une voiture libre si non on envois un erreur a l'utilisateur*/
 printf("Veuillez entrez le matricule du vehicule a louer \t RB ");
 scanf("%ld",&matlv);
/*Cette boucle permettra a l'utilisateur de resaisir le numero de matricule tant que celui ci n'est pas repertorié dans le parc*/
while (rechercher_matriculev(matlv)==  -1){
    matlv = reprendrematricule();
}
/*Cette boucle permettra a l'utilisateur de resaisir le numero de matricule tant que celui ci n'est pas repertorié comme etant libre dans le parc*/
while (recherche_etat_Louer(matlv) == 1){
    matlv = reprendrematricule_vlibre();
}

        if (recherche_etat_libre(matlv)==1){
                int i;
            char repmodif;

        char nvetat[8];
        nvetat[8]="Louer";
    printf("Vouvez vous vraiment modifier l'etat de cette voiture,tapez O/o pour oui et N/n pour non!:\t");
    scanf(" %c",&repmodif);


      FILE *listev;
      FILE *nvlistev=NULL;

   if (repmodif=='o' || repmodif == 'O'){
        /*On ouvre le fichier text */
    listev = fopen("parcv.txt","r");
    nvlistev = fopen("parcv.txt","a");

     /*On créé une boucle qui aura a parcourir chaque ligne de notre fichier tant qu'il y en a  */
    do{
    fscanf(listev,"%s          %ld         %f          %s\n",&vt.marque,         &vt.matricule,         &vt.kilometrage,           &vt.etat);

    /*Si dans la recherche ligne par ligne une ligne correspond au matricule entré par l'utilisateur alor  la boucle s'arrete pour effectuer des modification au fichier */
if (matlv == vt.matricule){
        vt.matricule=matlv;
    /*On demande a l'utilisateur de confirmer le nouvel etat "Louer" de la voiturre*/
        printf("Tapez <<Louer>> pour confirmer le nouvel etat de la voiture \t :");
        scanf("%s",vt.etat);
        }


/*On copie tout les element de notre premier fichier vers un deuxieme fichier  */
    fprintf(nvlistev,"%s          %ld         %f          %s\n",vt.marque,         vt.matricule,         vt.kilometrage,           vt.etat);
    } while(!feof(listev));
     fclose(listev);
     fclose(nvlistev);
     remove("parcv.txt");
     rename("parcvtemp.txt","parcv.txt");
     printf("La voiture portant le matricule %ld est desormais Louer!",vt.matricule);
     }
     else {printf("Modification  annulé");}

        }
        else { printf("Desolé ce vehicule est deja en location! \n");}




}

/*On crée une fonction permettant de gerer tout ce qui concerne le retour d'une voiture dans notre parc automobile */
void retourvoiture(){


    long matlv;

    /*On ouvre le fichier text */
    FILE * listev;
    listev = fopen("parcv.txt","a");

/*On demande a l'utilisateur d'entre un numero de matricule  si ce numero est present dans notre parc on verifie ensuite si le numero entré correspond a une voiture libre si non on envois un erreur a l'utilisateur*/
 printf("Veuillez entrez le matricule du vehicule a retournez\t RB");
 scanf("%ld",&matlv);

 /*Cette boucle permettra a l'utilisateur de resaisir le numero de matricule tant que celui ci n'est pas repertorié dans le parc*/
while (rechercher_matriculev(matlv) == -1){
    matlv = reprendrematricule();
}

/*Cette boucle permettra a l'utilisateur de resaisir le numero de matricule tant que celui ci n'est pas repertoriécomme etant louer dans le parc*/
while (recherche_etat_Louer(matlv) == -1){
    matlv = reprendrematricule_vlouer();
}
        if (recherche_etat_Louer(matlv) == 1){

            char repmodif;

        char nvetat[8] ="Libre";

    printf("Voulez vous vraiment retournez cette voiture ,tapez O/o pour oui et N/n pour non!");
    scanf(" %c",&repmodif);



      FILE *listev,*nvlistev;
signed char nvletat[10];

   if (repmodif=='o' || repmodif == 'O'){
        float nvk ;

        /*On ouvre le fichier text */
    listev = fopen("parcv.txt","r");
    nvlistev = fopen("parctemp.txt","a");

    /*On créé une boucle qui aura a parcourir chaque ligne de notre fichier tant qu'il y en a  */
    do{
    fscanf(listev,"%s          %ld         %f          %s\n",&vt.marque,         &vt.matricule,         &vt.kilometrage,           &vt.etat);

if (matlv == vt.matricule){
        /*Si dans la recherche ligne par ligne une ligne correspond au matricule entré par l'utilisateur alor la boucle s'arrete pour effectuer des modification au fichier */
        vt.matricule=matlv;
/*On demande a l'utilisateur de confirmer le nouvel etat "Libre" de la voiturre*/
        printf("Tapez <<Libre>> pour confirmer le nouvel etat de la voiture ");
       scanf("%s",vt.etat);
/*On demande d'entrez le kilometrage effectuer par la voiture pendant la location et on les rajoutes a l'ancienne valeur du kilometrage de la voiture  */
       printf("Veuillez entrez le kilometrage effectuer par la voiture louer");
       scanf("%f",&nvk);
       vt.kilometrage=vt.kilometrage+nvk;
        }
        /*On copie tout les element de notre premier fichier vers undeuxieme fichier  */
    fprintf(nvlistev,"%s          %ld         %f          %s\n",vt.marque,         vt.matricule,         vt.kilometrage,           vt.etat);
    } while(!feof(listev));
     fclose(listev);
     fclose(nvlistev);
     remove("parcv.txt");
     rename("parctemp.txt","parcv.txt");
     printf("La voiture portant le matricule %ld est desormais Libre!",vt.matricule);
     }
     else {printf("Modif annulé");}

        }
        else { printf("Desolé le numero de matricule entré ne correspond a aucun vehicule louer!\n");}




}


int main()
{

    char repcre;

    printf("Voulez vous ajoutez des voitures au parc?Tapez o/O pour oui et N/n pour non \n");
    scanf(" %c",&repcre);

    if (repcre =='O'||repcre =='o'){
        ajout_voiture();
        system("cls");
        menu();

    }
    else {
        menu();
    }




    return 0;
}
