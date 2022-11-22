#include "MenuCustomer.h"
void menuCustomer(Cart*& Head, Product P[], Queue*& Q, FILE* f, int num) {
	while (true) {
		system("cls");
		printf("\n\t\t\t\t------------------GIAO DIEN KHACH HANG-----------------------\n\n");
		printf("\n\n\t\t\t\t1. Xem san pham");
		printf("\n\n\t\t\t\t2. Xem gio hang");
		printf("\n\n\t\t\t\t0. Tro ve");
		int choice, subChoice;
		choice = pressChoice();
		if (choice == 1) {
			//Xem danh sach san pham
//			readfile(P, f ,num);
			viewProduct(P,num);
			choice = pressChoice();
			if(choice == 0) {
				return;
			}
			Product newProduct = chooseProduct(P, num, choice); //hien thi giao dien chi tiet san pham tra ve khhi them vao gio hang
			subChoice = pressChoice();
			if (subChoice == 1) {
				appendCart(Head, newProduct);
			}
			else if(subChoice == 0) {
				return;
			}
			else {
				printf("\n\t\tNhap khong hop le");
				return;
			}
			system("pause");
		}
		if (choice == 2) {
			//xem gio hang
			viewCart(P, Head);
			if(Head != NULL) {
				subChoice = pressChoice();
				if (subChoice == 1) {
					Customer C = newCustomer(); //Nhap thong tin khach hang
					Order O = newOrder(Head, C); //Khoi tao don hang
					//Viet 1 ham confirm
					confirmOrder(Q, Head, O);
				}
				else if(subChoice == 0) {
					return;
				}
				else {
					printf("\n\t\tNhap khong hop le");
					return;
				}
			}
			system("pause");
		}
		if (choice == 0) {
			return;
		}
	}
}


void confirmOrder(Queue*& Q, Cart*& Head, Order O) {
	int confirm;
	printf("\n\t\t Nhap (1) de dat hang: ");
	scanf("%d", &confirm);
	if(confirm == 1) {
		enQueue(Q, O); //gan vao queue cho xu ly
		writeFileOrderTest(O, "test.txt");
		Head = NULL;
		printf("\n\t\t\t----------------DAT HANG THANH CONG!--------------------\n\n");
	}
}
