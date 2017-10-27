// Structs & Fonctions de base - Damien Nouilhan
/*

CE FICHIER CONTIENT LA STRUCTURE DES FRACTIONS UTILIS�ES DANS TOUT LE PROGRAMME ET DES FONCTIONS DE BASE POUR LES MANIPULER

*/


// Ceci est la structure contenant les nombres avec lesquels nous travaillons. Les entiers seront repr�sent�s par une fraction sur 1.
typedef struct fraction				
{
	int numerateur;			//Rappel de 6�me: une fraction c'est num�rateur / d�nominateur.
	int denominateur;
} Fraction;


// Structure repr�sentant le r�sultat d'une op�ration. Elle permet d'indiquer s'il y a eu une erreur, ou le r�sultat.
// Veuillez retourner une valeur de ce type � la fin d'un calcul!
typedef struct resultat				
{
	int estErreur;			// Mettre � 0 s'il y a un r�sultat, � 1 s'il y une erreur. (Ex. d'utilisation: �0)
	Fraction resultat;
} Resultat;


// Si qq'un a besoin, ceci permet de cr�er une Fraction avec deux entiers.
Fraction Frac(int n, int d)	
{
	Fraction f = { n,d };
	return f;
}


// Si qq'un a besoin, ceci permet d'obtenir l'approximation d�cimale d'une fraction.
double Decimal(Fraction f)	
{
	return (double)f.numerateur / f.denominateur;
}