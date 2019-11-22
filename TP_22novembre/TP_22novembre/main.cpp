#include <iostream>
#include <cmath>
#include <cstdlib>
#include "CVecteur3D.h"

using namespace std;


int main()
{
	//Déclaration des variables
	//================================
	float fltX = 9.0;
	float fltY = 2.0;
	float fltZ = 5.0;
	float fltValeur = 4.0;

	//Construction des instances des vecteurs

	CVecteur3D vecteur1 = CVecteur3D();
	CVecteur3D vecteur2(fltX, fltY, fltZ);
	CVecteur3D vecteur3(fltValeur);
	//================================

	//Affichage des données carthésiennes
	cout << "Vecteur 1 : " << vecteur1.getX() << ", " << vecteur1.getY() << ", " << vecteur1.getZ() << endl;
	cout << "Vecteur 2 : " << vecteur2.getX() << ", " << vecteur2.getY() << ", " << vecteur2.getZ() << endl;
	cout << "Vecteur 3 : " << vecteur3.getX() << ", " << vecteur3.getY() << ", " << vecteur3.getZ() << endl;

	//Affichage des coincidences
	CVecteur3D vecteur4(fltX, fltY, fltZ); //vecteur 4 = vecteur 2
	cout << "Methode de coincidence 1, doit retourner faux : " << vecteur2.CoinciderVecteur(vecteur3) << endl;
	cout << "Methode de coincidence 1, doit retourner vrai : " << vecteur2.CoinciderVecteur(vecteur4) << endl;
	cout << "Methode de coincidence 2 (adresse), doit retourner faux : " << vecteur2.CoinciderVecteur(vecteur3) << endl;
	cout << "Methode de coincidence 2 (adresse), doit retourner vrai : " << vecteur2.CoinciderVecteur(vecteur4) << endl;
	cout << "Methode de coincidence 3 (ref), doit retourner faux : " << vecteur2.CoinciderVecteurRef(vecteur3) << endl;
	cout << "Methode de coincidence 3 (ref), doit retourner vrai : " << vecteur2.CoinciderVecteurRef(vecteur4) << endl;

	system("pause");
	return 0;
}