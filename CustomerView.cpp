#include "CustomerModel.h"
#include "helper.h"
Customer newCustomer() {
	Customer C;
	printf("\n\n\t\tNHAP THONG TIN KHACH HANG:");
	fflush(stdin);
	printf("\n\n\t\tNhap ho ten: ");
	gets(C.name);
	fflush(stdin);
	printf("\n\t\tNhap SDT: ");
//	gets(C.phone);
	scanf("%s",C.phone);
	fflush(stdin);
	printf("\n\t\tNhap dia chi giao hang: ");
	gets(C.address);
	return C;
}

//Thong tin khach hang
void viewInfoCustomer(Customer C) {
	printf("\n\t\t\t----------------THONG TIN KHACH HANG--------------------\n");
	printf("\n\n\t\tHo ten: %s", C.name);
	printf("\n\n\t\tSDT: %s", C.phone);
	printf("\n\n\t\tDia chi giao hang: %s", C.address);
}
