//================================================
// Fichier : CPoint.h
// Classe : CPoint
// Description : Classe servant � mod�liser un point dans un plan
// Attributs : r�els X et Y, int static Nb

// Auteur : Prob Bastien
// 25/11/2019 : Cr�ation
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

	//M�thode static :
	static int compte();

};