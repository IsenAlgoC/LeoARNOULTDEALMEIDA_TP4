#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	char mot[20];
	printf("Mot : ");
	scanf_s("%s", mot, (unsigned)_countof(mot));
	for (int i=0; i < 20; i++) { mot[i] = tolower(mot[i]);}
	for (int i = 0; i < 20; i++) {
        switch ((char)mot[i]) {
            case 'à': mot[i] = 'a'; break;
            case 'è': mot[i] = 'e'; break;
            case 'é': mot[i] = 'e'; break;
            case 'ì': mot[i] = 'i'; break;
            case 'ò': mot[i] = 'o'; break;
            case 'ù': mot[i] = 'u'; break;
            default:    break;
        }
    }
	//strcpy(mot,);
	puts(mot);



}