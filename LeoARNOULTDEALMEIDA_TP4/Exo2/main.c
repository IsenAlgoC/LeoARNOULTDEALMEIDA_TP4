#include <stdlib.h>
#include <stdio.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20
int main() {
	int MyTab1[TAILLETAB1];
	for (int i = 0; i < TAILLETAB1; i++) {
		MyTab1[i] = i + 1;
	}
	for (int i = 0; i < TAILLETAB1-1; i++) {
		printf("%d%c", MyTab1[i], SEPARATEUR);
	}
	printf("%d\n", MyTab1[TAILLETAB1-1]);
	int *MyPtr1= &MyTab1[TAILLETAB1 - 1];
	for (MyPtr1; MyPtr1 > &MyTab1[0]; MyPtr1--){printf("%p%c", MyPtr1, SEPARATEUR);}
	printf("%p", &MyTab1[0]);
	
}