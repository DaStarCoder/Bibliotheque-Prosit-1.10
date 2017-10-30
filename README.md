# Bibliothèque Prosit 1.10

## Commits et branches
Veuillez placer vos fonctions dans votre fichier assigné.
Vous êtes autorisés à `commit` dans la branche `master`, utilisez les branches de préférence seulement si votre fonction est encore à moité écrite, et faites une `pull request` une fois qu'elle est terminée.
## Liste des fonctions (idéalement) à faire
Ces fonctions sont celles que vous devez impérativement créer pour le fonctionnement de la bibliothèque. Veuillez respecter les noms des fichiers et des fonctions pour les autres. Vous pouvez cependant en faire d'autres.

Vous pouvez aussi créer un fichier `test.c` pour créer un `main()` à vous pour tester vos fonctions, le `.gitignore` l'ignorera.
### Damien
Fichier: `bases.c`
```c
struct Fraction
struct Resultat
  enum etatResultat
struct ResultatEntier
Fraction Frac(int n, int d)
double Decimal(Fraction f)
```
Fichier: `main.c`
```c
int main(int nbArgs, char *Args[])
```
### Antonin
Fichier: `simplification.c`
```c
Fraction Simplifier(Fraction f)
```
### Théo
Fichier: `Comparaison.c`
```c
Resultat Comparer(Fraction f1, Fraction f2)
```
### Léo
Fichier: `factorielle.c`
```c
Resultat Factorielle(Fraction f) // f!
```
### Yoann
Fichier: `puissance.c`
```c
Resultat Puissance(Fraction f, Fraction p) // f^p
```
### Tristan
Fichier: `bases.c`
```c
Fraction depuisDouble(double x)
```
### Maxime
Fichier: `arithmetique.c`
```c
Resultat Modulo(Fraction f1, Fraction f2) // f1 % f2
```
### Lucas
Fichier: `puissance.c`
```c
Resultat Racine(Fraction f, Fraction base) // racine base-ième de f
```
### Nathan
Fichier: `arithmetique.c`
```c
Resultat Somme(Fraction f1, Fraction f2)
Resultat Difference(Fraction f1, Fraction f2)
Resultat Produit(Fraction f1, Fraction f2)
Resultat Quotient(Fraction f1, Fraction f2)
Resultat PGCD(Fraction f1, Fraction f2)
Resultat PPCM(Fraction f1, Fraction f2)
```
