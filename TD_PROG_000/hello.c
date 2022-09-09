#include <stdlib.h> //d�finition de EXIT-SUCCESS (et autres)
#include <stdio.h> // pour utiliser printf /scanf et autres entr��es sorties
#include <locale.h>// pour utiliser des accents


// TD_PROG_000
// 
// cette solution cr�e un premier programme
// que vous pouvez cloner localement � l'aide des fonctions GitHub int�gr�es dans Visual Studio
// et ex�cuter afin de v�rifier que votre environnement de d�veloppement se comporte correctement.
// Pour cloner le d�p�t, suivez les intructions donn�es par votre enseignant pendant la s�ance.

int main(int argc, char* argv[]) {

	setlocale(LC_ALL,"fr-FR");// pour pouvoir afficher des accents et symboles fran�ais

	printf("\nHello\t JUNIA ISEN !\n");
	printf("\nBienvenue � JUNIA ISEN !\n");
	printf("7+2 = %d\n", 7 + 2);
	printf("7-2 = %d\n", 7 - 2);
	printf("7%%2 = %d\n", 7 % 2); // utiliser %% pour afficher % ; modulo
	printf("7*2 = %d\n", 7 * 2);
	printf("7/2 = %d\n", 7 / 2); // division entre deux entier donc division enti�re
	printf("7.0/2 = %f\n", 7. / 2); // division avec au moins un nombre � virgule donc division � virgule

	printf("7&2 = %d\n", 7 & 2); // ET bit � bit : � appliquer pour chaque colonne sur la forme binaire
	printf("7|2 = %d\n", 7 | 2); // OU bit � bit
	printf("10 & 6 = %d\n", 10 & 6);
	printf("10 | 6 = %d\n", 10 | 6);
	printf("7&&2 = %d\n", 7 && 2); // ET logique entre deux valeurs bool�ennes
	printf("7||2 = %d\n", 7 || 2); // OU logique entre deux valeurs bool�enne
	printf("0&&2 = %d\n", 0 && 2);
	printf("0||2 = %d\n", 0 || 2);

	printf("7<<3 = %d\n", 7 << 3); // d�calage � gauche d'un nombre au format bianire : multiplier par 2
	printf("7>>2 = %d\n", 7 >> 2); // d�calage � droite : diviser par 2
	printf("un caract�re seul : %c et une chaine : %s \n",'c', "plusieurs caracteres");
	printf("une chaine de caract�res : %15s \n", "la chaine");// utiliser les guillemets
	printf("%.4f", 1 / 3.);
	
	return(EXIT_SUCCESS);
}








/*printf("7 + 2 = %d \n", 7 + 2);
	printf("7 * 2 = %d \n", 7 * 2);
	printf("7 - 2 = %d \n", 7 - 2);
	printf("7 / 2 = %d \n", 7 / 2); // division de nombres entier -> division enti�re (quotient)
	printf("7 %% 2 = %d \n", 7 % 2); // modulo -> reste de la division enti�re
	printf("7.0 / 2 = %f \n", 7.0 / 2); // division de nombres � virgules -> division � virgule
	printf("7 << 2 = %d \n", 7 << 2); // d�calage � gauche d'un nombre binaire : multiplier par 2 un certain nombre de fois'
	printf("7 >> 2 = %d \n", 7 >> 2); // d�calage � droite d'un nombre binaire : diviser par 2 un certain nombre de fois'
	printf("7 << 3 = %d \n\n", 7 << 3);
	printf("7 & 2 = %d \n", 7 & 2); // op�ration ET bit � bit (entre deux s�quences de valeurs logiques)
	printf("7 | 2 = %d \n", 7 | 2); // op�ration OU bit � bit
	printf("7 && 2 = %d \n", 7 && 2); //op�ration ET logique (entre deux valeurs logiques)
	printf("7 || 2 = %d \n", 7 || 2); // op�ration OU logique
	printf("un caract�re : %c \n", 't'); // afficher un caract�re seul . attention utiliser apostrophe
	printf("une chaine de caract�res : %15s \n", "la chaine");// utiliser les guillemets
	printf("%.4f", 1 / 3.);
	*/