
#include <stdio.h>
#include <stdlib.h>

int ne;

void input_nele();
void input_ele(int array_int[]);
void inversione(int array[]);
void stampa(int array[]);

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Inversione di un array di interi.\n\n");

	input_nele();

	int array[ne];

	input_ele(array);

	inversione(array);

	stampa(array);

	system("pause");

	return 0;

}

void input_ele(int array_int[]) {

	int i = 0;

	for (i; i < ne; i++) {

		printf("Elemento n: %d\n\n",i+1);

		printf("Inserisci un qualsiasi numero intero: ");
		scanf("%d", &array_int[i]);

		system("cls");

	}

	printf("\n\n");

}

void inversione(int array[]) {

	int met = (ne / 2);
	int ap, j = ne - 1;

	int i = 0;

	for (i; i < met; i++) {

		ap = array[i];
		array[i] = array[j];
		array[j] = ap;

		j--;

	}

}

void stampa(int array[]) {

	printf("L'array invertito e': ");

	int i = 0;

	for (i; i < ne; i++) {

		printf("%5d", array[i]);

	}

	printf("\n\n");

}

void input_nele() {

	do {

		printf("Inserisci il numero di elementi da inserire all'interno dell'array: ");
		scanf("%d", &ne);

		system("cls");

		if (ne <= 0) {

			printf("Errore: Impossibile inserire un numero minore o uguale a 0.\n\n");

		}

	} while (ne <= 0);

}
