//================================================
// Fichier : CVecteur3D.h
// Classe : CVecteur3D
// Description : Classe servant � mod�liser un vecteur sur un espace 3D
// Attributs : r�els X, Y et Z

// Auteur : Prob Bastien
// 22/11/2019 : Date de cr�ation
//================================================

#pragma once

class CVecteur3D
{
	private:
		float m_fltX;
		float m_fltY;
		float m_fltZ;

	public:
		CVecteur3D();
		CVecteur3D(float, float, float);
		CVecteur3D(float);
		const float getX();
		const float getY();
		const float getZ();
};