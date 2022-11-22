#include "helper.h"
//Nhap lua chon
int pressChoice() {
	int choice;
	printf("\n\n\t\t\tNhap lua chon: ");
	scanf("%d", &choice);
	int i;
	for(i ==0; i < 10; i ++) {
		if(choice == i) {
			return choice;
		}
	}
}

char* convertStatus(int x) {
	if(x == 1) {
		return "Dang xu ly";
	}
	if(x == 2) {
		return "Dang giao hang";
	}
	if(x == 3) {
		return "Da hoan thanh";
	}
	if(x == 0) {
		return "Da huy";
	}
}

int randomNumber() {
	int number;
	time_t t;
   /* Khoi tao bo sinh so ngau nhien */
   srand((unsigned) time(&t));
   number = rand() % 1000000;
   return number;
}

void titleDetailCart() {
	printf("\n\n%10s %10s %20s %10s","STT", "ID", "Ten SP", "Gia");
}
