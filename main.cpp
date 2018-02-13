#include <iostream>
int main()
{
    /********************************
    ****DECLARATION DES VARIABLES****
    *********************************/
    int entier;
    float reel;
    /* Saisies par l'utilisateur */
    std::cout << "Hello world!" << std::endl;
    std::cout<< " Saisissez un entier :";
    std::cin>>entier;//Saisie d'un entier
    std::cout<< " Saisissez un reel ";
    std::cin>>reel ;// Saisie d'un réel
    /*Affichage des variables saisies */
    std::cout<<std::endl<<" Votre reel est "<<reel<<std::endl ;/
    std::cout<<" Votre entier est "<< entier << std::endl ;
    return 0;
}
