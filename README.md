# projet-c
Projet C : Rapport
Mise en sitiuation
 La premiere fenetre permet d'enregistrer ( s'inscrire et s'identifier) les coodonnées du manager à savoir son nom , son prenom , son mot de passe en tenant en consideration les conditions qu'il faut faire ( le mot de passe doit contenir au minimun 6 caractères ).
 ### Fonction initialize_manager( InitializeListing) et initialize_travel(Initialize_Travel) :
le but de ces deux fonctions est de initialise la curseur toujours a la début des deux fichiers « manager.txt »et « trips.txt »
## le profil du manager :
### Fonction Adding_manager: 
ajout d'un manager son nom et mot de passe 
 avec des conditions bien déterminés sur le mot de passe la longeur doit etre >=6 et a des letter en majuscules et minuscules et des numero
### Fonction WriteToFile_manager :
prendre une list chainée de type managerprofile comme parametre et ecrire les données du profil (nom et mot de passe ) dans un  file , sa nom est"managers".
### Fonction login (s’identifiez) :
prend comme paramétre la liste chainée de type managerprofile et vérifie les coordonées de manager vrai ou non 
si vrai le systeme va automatiquement a la système d’exploitation ou Le manager peut faire ces opérations de gérer les dates de voyages ,modifier les voyages , ajouter un autre tout en affichant son description ou le supprimer .
## le voyage :
### Fonction Add Travel:
cette fonction ajoute des voyages caracterisé par identifiant unique (le premier voyage avec identifiant :50000) prend comme parametre liste chainée de type Travel et ajoute à cette liste le nouveau voyage , demande  de l'utilisateur le nom de destination ,la date d'aller , la date de retour , prix et nombre de places disponible pour ce voyage .(tout les informations va enrigestréé automatiquement ) 
 il ya des conditions bien determinés sur les carateristique qu'il faut prendre en consideration à savoir date fin elle doit etre superieur ala date debut 
le moi doit etre ente 1 et 12 , l'année doit etre superieur a 2022 et la date ne doit pas depassée 31 ( on a tenu en consideration le moi de fevrier egalement)
     */ important : le premiere voyage seulment va cancler le programmme , mais tout va marché bien aprés la deuxieme lancemnt de programme /*
### Fonction Modifier le voyage :
prend comme une liste chainée de type Travel comme paramétre et peut modifier les caracterisques du voyage en tenant en consideration les conditions exigées .
### Fonction recherche des voyages disponnibles :
A partir de deux dates entreés, on affiche les voyages disponnibles et demande si vaulais voir la discription de voyage obtenu.
### Fonction Description d'un voyage :
Cette fonction a comme role, comme son nom l'indique , d'afficher la description d'un voyage a savoir les dates de debut et de fin , destination , prix , nombre de place disponnible
### Fonction Supprimer le voyage :
prend liste chainée de type Travel et supprime le voyage en connaissant la destination

Afin de rendre le projet plus interressant et ajouter notre touche , on a insérer d'autre fonctions a savoir la fonction changer le mot de passe : A travers cette fonction le manager est capable de changer son mot de passe 
### la fonction exit_system :
pour se deconnecter et sortir du programme ou cas ou le manager a terminé d'effectuer ces operations  


 
