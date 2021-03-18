#include <iostream>
#include "Fonctions.h"
#include <fstream>

// pile = stack
// tas = heap

int main()
{
    setlocale(LC_ALL, "french");

    int n;  //largeur du tableau
    int temp;
    int compteur = 0;
    int* p = new int;
    bool finProgramme = false;
    std::ifstream lectureEntier;

    lectureEntier.open("C:\\Users\\alexa\\Documents\\ProjetC++\\TP1Sylvain\\TP1Sylvain\\entier.txt");
    lectureEntier >> n;
    int* tabEntier = new int[n];

    while (lectureEntier >> temp)
    {
        tabEntier[compteur] = temp;
        compteur++;
    }
    lectureEntier.close();

    while (!finProgramme)
    {
        afficherMenu(&p);
        switch (*p)
        {
        case 1:
            sommeTabEntier(tabEntier, n);
            break;
        case 2:
            moyenneTabEntier(tabEntier, n);
            break;
        case 3:
            inversionTabEntier(tabEntier, n);
            break;
        case 4:
            memoireDynamique(tabEntier, n);
            break;
        case 5:
            finProgramme = true;
            break;
        }
    }
    delete p;
    delete []tabEntier;

    
    
}

