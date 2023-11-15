#include <stdio.h>

typedef struct Date {
int jour;
int mois;
int annee;

}date_de_naissance;
typedef struct Etudiant{
    char nom[30];
    char prenom[30];
    char genre[1];
    int notes[3];
    struct Date;

}etudiant;

float calculerMoyenne(struct Etudiant etudiant){
      int sommeNotes = 0;
      int nombreMatieres = 3;
      int i;

      for(i = 0; i < nombreMatieres; i++){
          sommeNotes += etudiant.notes[i];
}

return(sommeNotes / nombreMatieres);
}
float calculerMoyenneGenerale(struct Etudiant *classe, int taille) {
      float sommeMoyennes = 0;
            int i;
      for (i = 0; i < taille; i++) {
           sommeMoyennes += calculerMoyenne(classe[i]);
     }
      float moyenneGenerale = sommeMoyennes / taille;
      return moyenneGenerale;
}
int main(){
    int tailleClasse;
    printf("Entrez la taille de la classe: ");
    scanf("%d",&tailleClasse);

    struct Etudiant classe[tailleClasse];
    int i;
    for (i = 0; i < tailleClasse; i++){
        printf("\nEtudiant %d\n",i + 1);
        printf("Nom: ");
        scanf("%s", classe[i].nom);
        printf("Prenom: ");
        scanf("%s",&classe[i].prenom);
        printf("Genre(M/F): \n");
        scanf("%c",&classe[i].genre);
        printf("Notes (3 notes separes par un espace): ");
        int j;
        for(j = 0; j < 5; j++){
            scanf("%d",&classe[i].notes[j]);
        }
    }
        float moyenneGeneraleClasse = calculerMoyenneGenerale(classe,tailleClasse);
        float meilleurMoyenne = -1;
        int MeilleurEtudiant = -1;

        for(i = 0; i < tailleClasse; i++){
            float moyenneEtudiant = calculerMoyenne(classe[i]);
                  if (moyenneEtudiant > meilleurMoyenne){
                    meilleurMoyenne = moyenneEtudiant;
                    MeilleurEtudiant = i;
                  }
        }

        printf("\nMeilleur etudiant: %s %s\n", classe[MeilleurEtudiant].nom, classe[MeilleurEtudiant].prenom);
        printf("Moyenne: %.2f\n", meilleurMoyenne);
        printf("\nMoyenne generale de la classe : %.2f\n", moyenneGeneraleClasse);


     return 0;

}
