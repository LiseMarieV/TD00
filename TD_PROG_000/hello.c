#include <stdlib.h>
#include <stdio.h>


// TD_PROG_000
// 
// cette solution crée un premier programme
// que vous pouvez cloner localement à l'aide des fonctions GitHub intégrées dans Visual Studio
// et exécuter afin de vérifier que votre environnement de développement se comporte correctement.
// Pour cloner le dépôt, suivez les intructions données par votre enseignant pendant la séance.

int main(int argc, char* argv[]) {



	printf("\nHello JUNIA ISEN !\n");
	printf("7 + 2 = %d \n",7 + 2);
	printf("7 * 2 = %d \n", 7 * 2);
	printf("7 - 2 = %d \n", 7 - 2);
	printf("7 / 2 = %d \n", 7 / 2); // division de nombres entier -> division entière (quotient)
	printf("7 %% 2 = %d \n", 7 % 2); // modulo -> reste de la division entière
	printf("7.0 / 2 = %f \n", 7.0 / 2); // division de nombres à virgules -> division à virgule
	printf("7 << 2 = %d \n", 7 << 2); // décalage à gauche d'un nombre binaire : multiplier par 2 un certain nombre de fois'
	printf("7 >> 2 = %d \n", 7 >> 2); // décalage à droite d'un nombre binaire : diviser par 2 un certain nombre de fois'
	printf("7 << 3 = %d \n\n", 7 << 3);
	printf("7 & 2 = %d \n", 7 & 2); // opération ET bit à bit (entre deux séquences de valeurs logiques)
	printf("7 | 2 = %d \n", 7 | 2); // opération OU bit à bit
	printf("7 && 2 = %d \n", 7 && 2); //opération ET logique (entre deux valeurs logiques)
	printf("7 || 2 = %d \n", 7 || 2); // opération OU logique
	
	printf("0 & 2 = %d \n", 0 & 2);
	printf("8 & 2 = %d \n", 8 & 2);
	printf("0 | 2 = %d \n", 0 | 2);
	printf("0 && 2 = %d \n", 0 && 2);
	printf("0 || 2 = %d \n", 0 || 2);
	
	return(EXIT_SUCCESS);
}