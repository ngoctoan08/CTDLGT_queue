#include "ProductController.h"

void viewProduct(Product P[], int num) {
	showProduct(P, num);
	
}

Product chooseProduct(Product P[], int num, int choice) {
//	int choice;
//	choice = pressChoice();
	int i;
	for (i = 0; i < num; i++) {
		if (i + 1 == choice) {
			showDetailProduct(P[i]);
			return P[i];
		}
	}
}
