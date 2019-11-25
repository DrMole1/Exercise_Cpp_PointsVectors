//================================================
// Fichier : CPoint.h
// Classe : CPoint
// Description : Classe servant à modéliser un point dans un plan
// Attributs : réels X et Y, int static Nb

// Auteur : Prob Bastien
// 25/11/2019 : Création
//================================================

#pragma once

class CPoint
{
private:
	float m_fltX;
	float m_fltY;
	static int m_nPoint;

public:
	CPoint();
	CPoint(float, float);
	const float getX();
	const float getY();

	//Méthode static :
	static int compte();

};