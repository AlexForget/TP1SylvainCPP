#include "Fonctions.h"
#include <iostream>
#include <string>



void afficherMenu(int** p) {

	std::cout << "\n1. Somme\n2. Moyenne\n3. Inversion\n4. Mémoire dynamique\n5. Quitter" << std::endl;
	std::cin >> **p;
	while (**p < 1 || **p > 5)
	{
		std::cout << "Choix invalide." << std::endl;
		std::cin >> **p;
	}
}

void sommeTabEntier(int tabEntier[], int n) {
	int somme = 0;

	for (int i = 0; i < n; i++)
	{
		somme += tabEntier[i];
	}
	std::cout << "La somme du tableau d'entier est de " << somme << std::endl;
}

void moyenneTabEntier(int tabEntier[], int n) {
	int moyenne = 0;

	for (int i = 0; i < n; i++)
	{
		moyenne += tabEntier[i];
	}
	std::cout << "La moyenne du tableau d'entier est de " << moyenne / n << std::endl;
}

void inversionTabEntier(int tabEntier[], int n) {
	int temp;

	std::cout << "Affichage du tableau avant inversion. " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << tabEntier[i] << std::endl;
	}

	for (int i = 0 ; i < n/2; i++)
	{
		temp = tabEntier[i];
		tabEntier[i] = tabEntier[(n - 1) - i];
		tabEntier[(n - 1) - i] = temp;
	}
	
	std::cout << "Affichage du tableau après inversion. " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << tabEntier[i] << std::endl;
	}
	
}

void memoireDynamique(int tabEntier[], int n) {
	int* tabEntierCopie = new int[n];

	for (int i = 0; i < n; i++)
	{
		tabEntierCopie[i] = tabEntier[i];
	}

	std::cout << "Affichage du tableau copié" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << tabEntierCopie[i] << std::endl;
	}
	delete[]tabEntierCopie;
}
