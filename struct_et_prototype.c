#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <errno.h>
#include "struct_et_prototype.h"
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
   char test[8]="Libre";
   char testp[8]="Louer";



    FILE *listev;
    listev = fopen("parcv.txt","r");

    /* */
int nfl;
nfl=0;

printf("=========================================Liste  des matricules des voitures libre===================================================\n");
   /* */
    do{
    fscanf(listev,"%s          %ld         %f          %s\n",&vt.marque,         &vt.matricule,         &vt.kilometrage,           &vt.etat);

/* */
if(strcmp(vt.etat,test)==0){

    printf("RB %ld \n",vt.matricule);
    nfl++;

}

     } while(!feof(listev));

     printf("============ \n");
     /* */
     printf("Nombre totale de voiture libre : %d voitures \n",nfl);

     fclose(listev);

     FILE *liste;
    liste = fopen("parcv.txt","r");

     int nfv;
nfv=0;
     printf("=========================================Liste  des matricules des voitures louer===================================================\n");
   /* */
    do{
    fscanf(listev,"%s          %ld         %f          %s\n",&vt.marque,         &vt.matricule,         &vt.kilometrage,           &vt.etat);

/* */
if(strcmp(vt.etat,testp)==0){

    printf("RB %ld \n",vt.matricule);
    nfv++;

}

     } while(!feof(liste));


     printf("============ \n");
     /* */
     printf("Nombre totale de voiture en location : %d voitures \n",nfv);



      printf("Le kilometrage moyen sur ce parc est de %f Km \n\n", kilometrage_moyen(ntvoiture));


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
/*On créé une fonction permettant  de gerer tout ce qui concerne le  depart(location) d'une voiture de notre parc*/
void louer_voiture(){
    long matlv;

    /*On ouvre le fichier text */


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
     printf("Cette voiture est desormais Louer!");
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


    printf("Voulez vous vraiment retournez cette voiture ,tapez O/o pour oui et N/n pour non!");
    scanf(" %c",&repmodif);



      FILE *listev,*nvlistev;

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
     printf("Cette voiture est  desormais Libre et son kilometrage a été mis a jour!",vt.matricule);
     }
     else {printf("Modif annulé");}

        }
        else { printf("Desolé le numero de matricule entré ne correspond a aucun vehicule louer!\n");}




}
