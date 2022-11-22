#include "CartModel.h"
void showCart(Cart* Head) {
	if (Head == NULL) {
		printf("\n\t\t\tGIO HANG TRONG!");
	}
	else {
		Cart* search = Head;
		int count = 1;
		float totalMoney = 0;
		while (search != NULL) {
			printf("\n\n\t\t\t%d\t\t%d\t\t%s\t\t%.2f",count, search->P.id, search->P.name, search->P.price);
			totalMoney += search->P.price;
			search = search->next;
			count++;
		}
		printf("\n\n\t\t\tTong tien: %.2f", totalMoney);
	}
}
