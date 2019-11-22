//================================================
// Fichier : CVecteur3D.h
// Classe : CVecteur3D
// Description : Classe servant à modéliser un vecteur sur un espace 3D
// Attributs : réels X, Y et Z

// Auteur : Prob Bastien
// 22/11/2019 : Date de création
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