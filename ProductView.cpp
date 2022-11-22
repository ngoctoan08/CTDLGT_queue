#include "ProductModel.h"
#include "helper.h"
//Hien thi danh sach san pham
void showProduct(Product P[], int num){
	printf("\n\t\t\t------------------GIAO DIEN DANH SACH SAN PHAM-----------------------\n\n");
	for (int i = 0; i < num; i++) {
		printf("\n\n\t\t %d. %s", i + 1, P[i].name);
	}
	printf("\n\n\t\t 0. Tro ve");
}


//view nhap thong tin sp
void createProduct(Product P[], int &num){
	printf ("\n\t\t\tNhap so san pham muon them: ");
	scanf("%d", &num);	
	int i;
	for (i =0; i<num; i++){
		fflush(stdin);
		printf ("\n\t\t\tNhap thong tin san pham");
//		printf ("\n\t\t\tNhap ma san pham id: ");
//		scanf("%d", &P[i].id);
    	P[i].id = randomNumber();
		fflush(stdin);
		printf ("\n\t\t\tNhap ten san pham: ");
		gets(P[i].name);
    	fflush(stdin);
    	printf ("\n\t\t\tNhap gia san pham: ");
		scanf("%f", &P[i].price);
		fflush(stdin);
	}
}

//hien thi chi tiet san pham
void showDetailProduct(Product P) {
	printf("\n\t\t\t------------------GIAO DIEN CHI TIET SAN PHAM-----------------------\n\n");
	printf("\n\t\t THONG TIN %s\n\n", P.name);
	printf("\n\t\t%s - Gia: %.2f", P.name, P.price);
	printf("\n\n\t\t1. Them vao gio");
	printf("\n\t\t0. Tro ve");
}

