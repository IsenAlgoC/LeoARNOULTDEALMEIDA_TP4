#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	char mot[20];
	printf("Mot : ");
	scanf_s("%s", mot, (unsigned)_countof(mot));
	for (int i=0; i < 20; i++) { mot[i] = tolower(mot[i]);}
	printf("Ce mot est ");
	for (int i = 0; i < 20; i++) {
		if ((mot[i] == 'é' ) || (mot[i] == 'è')) { mot[i] = 'e'; }
		else if (mot[i] == 'à') { mot[i] = 'a'; }
		else if (mot[i] == 'ù') { mot[i] = 'u'; }
	}
	for (int i = 0; i < strlen(mot); i++) {
		if (mot[i] == mot[strlen(mot) - i]) { printf("pas "); break; }
	}
	printf("un palindrome");
	puts(mot);
}