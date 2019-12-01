#ifndef STRUCT_ET_PROTOTYPE_H_INCLUDED
#define STRUCT_ET_PROTOTYPE_H_INCLUDED

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

float kilometrage_moyen(int ntv);
void Etat_parc();
int compteligne(int nbligne);
void sauvegarde();
int reprendrematricule ();
int reprendrematricule_vlouer ();
int reprendrematricule_vlibre ();
void afficher_mat_vlibre();
int recherche_etat_Louer(long immatrech);
int recherche_etat_libre(long immatrech);
int rechercher_matriculev(long imatrech);
void recherche_affichage ();
void ajout_voiture();
void louer_voiture();
void retourvoiture();


#endif // STRUCT_ET_PROTOTYPE_H_INCLUDED
