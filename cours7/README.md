L'exercice :

On souhaite créer une classe liste permettant de manipuler des « listes chaînées »
dans lesquelles la nature de l’information associée à chaque « nœud » de la liste
n’est pas connue (par la classe). Une telle liste correspondra au schéma suivant :


La déclaration de la classe liste se présentera ainsi :
    struct element // structure d'un élément de liste
    {
        element * suivant ; // pointeur sur l'élément suivant
        void * contenu ; // pointeur sur un objet quelconque
    } ;

    class liste
    {
        element * debut ; // pointeur sur premier élément
        // autres membres données éventuels

        public :
            liste () ; // constructeur
            ~liste () ; // destructeur
            void ajoute (void *) ; // ajoute un élément en début de liste
            void * premier () ; // positionne sur premier élément
            void * prochain () ; // positionne sur prochain élément
            int fini () ;
    } ;

** La fonction ajoute devra ajouter, en début de liste, un élément pointant sur l’information dont l’adresse est fournie en argument (void *).

** Pour « explorer » la liste, on a prévu trois fonctions :
    *** premier, qui fournira l’adresse de l’information associée au premier nœud de la liste et qui, en même temps, préparera le processus de parcours de la liste ;

    *** prochain, qui fournira l’adresse de l’information associée au «prochain nœud » ; des appels successifs de prochain devront permettre de parcourir la liste (sans qu’il soit nécessaire d’appeler une autre fonction) ;

    *** fini, qui permettra de savoir si la fin de liste est atteinte ou non.


Questions
    1- Compléter la déclaration précédente de la classe liste et en fournir la définition de manière qu’elle fonctionne comme demandé.
    
    2- Soit la classe point suivante :

        class point
        { 
            int x, y ;
            
            public :
            point (int abs=0, int ord=0) { x=abs ; y=ord ; }void affiche () { cout << "Coordonnées : " << x <<" " << y << "\n" ;}
        };
        
        Créer une classe liste_points, dérivée à la fois de liste et de point, pour qu’elle puisse permettre de manipuler des listes chaînées de points, c’est-à-dire des listes comparables à celles présentées cidessus, et dans lesquelles l’information associée est de type point.

        On devra pouvoir, notamment :
            a) ajouter un point en début d’une telle liste ;
            b) disposer d’une fonction membre affiche affichant les informations associées à chacun des points de la liste de points.
            
    3- Écrire un petit programme d’essai.