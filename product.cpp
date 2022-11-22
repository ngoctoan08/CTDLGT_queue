#include "product.h"

//Tao danh sach san pham
//Phan nay lam tam tam thoi
void createProduct(Product P[]) {
	char name[30] = "sanpham";
	char c[2];
	int i;
	for (i = 0; i < LENGTH; i++) {
		//c[0] = i + 1 + '0';
		name[7] = i + 1 + '0';
		strcpy(P[i].name, name); //gan chuoi
		P[i].price = 1000000; //Gan tat ca cac san pham co gia la 100000
	}
}

//Hien thi danh sach san pham
void showProduct(Product P[]) {
//	printf("\n\t\t\t\DANH SACH SAN PHAM\n");
	for (int i = 0; i < LENGTH; i++) {
		printf("\n\t\t %d) %s", i + 1, P[i].name);
	}
}
