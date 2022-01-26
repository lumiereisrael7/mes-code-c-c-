#ifndef _COURS7
#define _COURS7

    #include <iostream>

    struct element
    {
        element * suivant;
        void * contenu;
    };

    class liste
    {
        element * debut, * current;

        public:
            liste();
            ~liste();
            void ajouter(void *) ; // ajoute un élément en début de liste
            void * premier () ; // positionne sur premier élément
            void * prochain () ; // positionne sur prochain élément
            int fini () ;
    };

#endif