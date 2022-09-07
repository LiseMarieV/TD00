#include <stdlib.h>
#include <stdio.h>


// TD_PROG_000
// 
// cette solution cr�e un premier programme
// que vous pouvez cloner localement � l'aide des fonctions GitHub int�gr�es dans Visual Studio
// et ex�cuter afin de v�rifier que votre environnement de d�veloppement se comporte correctement.
// Pour cloner le d�p�t, suivez les intructions donn�es par votre enseignant pendant la s�ance.

int main(int argc, char* argv[]) {



	printf("\nHello JUNIA ISEN !\n");
	printf("7 + 2 = %d \n",7 + 2);
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
	
	printf("0 & 2 = %d \n", 0 & 2);
	printf("8 & 2 = %d \n", 8 & 2);
	printf("0 | 2 = %d \n", 0 | 2);
	printf("0 && 2 = %d \n", 0 && 2);
	printf("0 || 2 = %d \n", 0 || 2);
	
	return(EXIT_SUCCESS);
}