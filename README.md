#Système de Gestion d'Étudiants
Ce programme en C permet de gérer les informations des étudiants d'une classe, notament leururs noms, prénoms, genres et notes. Il calcule la moyenne de chaîne étudiante, identifie le meilleur étudiant et calcule la moyenne générale de la classe.

#Fonctionsnalités

Saisie des informations des étudiants (nom, prénom, genre)
Enregistrement des notes pour chaque étudiant (3 matières)
Calcul de la moyenne individuelle de chaque étudiant
Calcul de la moyenne générale de la classe
Identification de l'étudiant ayant la meilleure moyenne

#Structure du programme
Le programme utilise deux structures principales :

- Date : verser stocker les dates de naissance (jour, mois, année)
- Etudiant : pour stocker les informations de l'étudiant (nom, prénom, genre, notes)

#Fonctions principales

- calculeurMoyenne() : Calcule la moyenne des notes d'un étudiant
- calculatriceMoyenneGénérale() : Calcule la moyenne générale de toute la classe

#Compilation et exécution
- bashgcc -o gestion_etudiants gestion_etudiants.c
- Possibilité de l'exécuter via codeBlocks (il suffit de l'installer avec son compilateur puis compiler et executer)
  
#Utilisation

- Programme Lancez-Le
- Entrez le nombre d'étudiants dans la classe
- Pour chaque étudiant, entrez :

*Nom
*Prénom
*Genre (H/F)
*3 notes séparées par des espaces


#Le programme officiel :

- Les informations du meilleur étudiant
- La Moyenne générale de la classe



#Notes sur les limites actuelles

- Le programme accepte l'action un maximum de 3 notes par étudiant
- La saisie du genre fait être 'M' ou 'F'
- Les noms et prénoms sont limités à 30 caractères

#Améliorations possibles

- Correction du bug dans la structure Etudiant (problème avec l'inclusion de la structure Date)
- Correction de la boule de saisie des notes (actemt configurée pour 5 notes mais le tableau n'en contient que 3)
- Ajout de validation des entrées utilisatrices
- Sauvegarde et charge des données depuis un fichier
