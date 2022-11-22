#include "MenuHome.h"
//Menu giao dien Home
void menuHome(Cart*& Head, Product P[], Queue*& Q, Queue*& S, Queue*& C, FILE* f, int &num) {
	readFileTest(Q, S, C, f);
	readfile(P,f,num);
//	printf("%d", num);
	while (true) {
		system("cls");
		printf("\n\t\t\t------------------HE THONG QUAN LY DAT HANG-----------------------\n\n");
		printf("\n\n\t\t\t\t1. Vai tro khach hang");
		printf("\n\n\t\t\t\t2. Vai tro nhan vien");
		printf("\n\n\t\t\t\t0. Thoat he thong");
		int choice = pressChoice();
		if (choice == 1) {
			//Vai tro khach hang
			menuCustomer(Head, P, Q, f, num);
			system("pause");
		}
		if (choice == 2) {
//			printf("\nMenu Nhan vien");
			menuStaff(P, Q, S, C, f, num);
//			showQPending(Q);
			
			system("pause");
		}
		if (choice == 0) {
			printf("\nThoat he thong");
			return;
		}
	}
}
