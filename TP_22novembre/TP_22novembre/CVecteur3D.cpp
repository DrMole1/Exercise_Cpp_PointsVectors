//==========================================
// Fichier : CVecteur3D.cpp
// Classe : CVecteur3D

// Auteur : Prob Bastien
// 22/11/2019 : Date de cr�ation
//==========================================


#include "CVecteur3D.h"


//==================================================================================
// Constructeurs

// BUT : Cr�er un vecteur 3D initialis� � 0 sur tous les axes.
// ENTREES : /
// SORTIES : Le vecteur 3D initialis� � 0.
CVecteur3D::CVecteur3D()
{
	this->m_fltX = 0.0f;
	this->m_fltY = 0.0f;
	this->m_fltZ = 0.0f;
}


// BUT : Cr�er un vecteur 3D dont les valeurs des axes sont pass�s en param�tre.
// ENTREES : Les 3 r�els.
// SORTIES : Le vecteur 3D initialis� avec les 3 r�els.
CVecteur3D::CVecteur3D(float fltX, float fltY, float fltZ)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;
	this->m_fltZ = fltZ;
}


// BUT : Cr�er un vecteur 3D dont chaque axe poss�de la m�me valeur.
// ENTREES : Un r�el.
// SORTIES : Le vecteur 3D initialis� avec le r�el.
// NOTE : Constructeur inline
CVecteur3D::CVecteur3D(float fltValeur) { this->m_fltX = fltValeur; this->m_fltY = fltValeur; this->m_fltZ = fltValeur;}


//=================================================================================

//=================================================================================

//Accesseurs des attributs


// BUT : getter de l'attribut X
// ENTREES : /
// SORTIES : La valeur de l'attribut X
float const CVecteur3D::getX()
{
	return m_fltX;
}


// BUT : getter de l'attribut Y
// ENTREES : /
// SORTIES : La valeur de l'attribut Y
float const CVecteur3D::getY()
{
	return m_fltY;
}


// BUT : getter de l'attribut Z
// ENTREES : /
// SORTIES : La valeur de l'attribut Z
float const CVecteur3D::getZ()
{
	return m_fltZ;
}

//=================================================================================