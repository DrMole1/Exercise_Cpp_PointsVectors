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

	//Affichage
	cout << "Vecteur 1 : " << vecteur1.getX() << ", " << vecteur1.getY() << ", " << vecteur1.getZ() << endl;
	cout << "Vecteur 2 : " << vecteur2.getX() << ", " << vecteur2.getY() << ", " << vecteur2.getZ() << endl;
	cout << "Vecteur 3 : " << vecteur3.getX() << ", " << vecteur3.getY() << ", " << vecteur3.getZ() << endl;

	system("pause");
	return 0;
}