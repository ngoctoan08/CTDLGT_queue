#include "CartController.h"
void viewCart(Product P[], Cart* Head) {
	printf("\n\t\t\t------------------GIAO DIEN GIO HANG-----------------------\n\n");
	if (Head == NULL) {
		printf("\n\t\tGIO HANG TRONG!");
	}
	else {
		showCart(Head);
		printf("\n\n\t\t1. Dat hang");
		printf("\n\t\t0. Tro ve");
	}	
}

