#include "MenuStaff.h"

void menuStaff(Product P[], Queue*& Q, Queue*& S, Queue*& C, FILE *f, int &num) {
	while (true) {
		system("cls");
		printf("\n\t\t\t\t------------------GIAO DIEN NHAN VIEN-----------------------\n\n");
		printf("\n\n\t\t\t\t1. Quan ly san pham");
		printf("\n\n\t\t\t\t2. Quan ly don hang");
		printf("\n\n\t\t\t\t0. Tro ve");
		int choice = pressChoice();
		if (choice == 1) {
			//Giao dien quan ly san pham
//			printf("\n\t\tQUAN LY SAN PHAM");
			menuProduct(P, f, num);
			system("pause");
		}
		if (choice == 2) {
			menuOrder(Q, S, C);			
			system("pause");
		}
		if (choice == 0) {
			return;
		}
	}
} 


void menuOrder(Queue*& Q, Queue*& S, Queue*& C) {
	while (true) {
		system("cls");
		printf("\n\t\t\t\t----------------GIAO DIEN QUAN LY DON HANG--------------------\n\n");
		printf("\n\n\t\t\t\t1. Cho xu ly");
		printf("\n\n\t\t\t\t2. Dang giao hang");
		printf("\n\n\t\t\t\t3. Da hoan thanh");
		printf("\n\n\t\t\t\t0. Tro ve");
		int choice = pressChoice();
		if (choice == 1) {
			//Hien thi giao dien don hang cho xu ly
			showOrderPending(Q, S);
//			showQPending(Q);
			system("pause");
		}
		if (choice == 2) {
			//Hien thi giao dien don hang dang giao hang
			showOrderShipping(C, S);
			system("pause");
		}
		if (choice == 3) {
			//Hien thi giao dien don hang da hoan thanh
			showOrderComplete(C);
			system("pause");
		}
		
		if (choice == 0) {
			return;
		}
	}
}

void menuProduct(Product P[], FILE *f, int &num){
	while (true) {
		system("cls");
		printf("\n\t\t\t\t----------------GIAO DIEN QUAN LY SAN PHAM--------------------\n\n");
		printf("\n\n\t\t\t\t1. Them san pham");
		printf("\n\n\t\t\t\t0. Tro ve");
		int choice = pressChoice();
		if (choice == 1) {
			createProduct(P, num);
			writefile(P, f, num);
			system("pause");
		}		
		if (choice == 0) {
			return;
		}
	}
}

