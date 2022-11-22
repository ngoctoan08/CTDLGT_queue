#include "OrderModel.h"

Order newOrder(Cart* C, Customer &I) {
	Order temp;
	temp.id = randomNumber();
	temp.C = C;
	temp.I = I;
	Cart* search = temp.C;
	temp.status = 1;
	return temp;
}

void showOrder(Order O) {
	printf("\n\n\t\tID: %d",O.id);
	viewInfoCustomer(O.I);
	printf("\n\t\tTrang thai: %s\n", convertStatus(O.status));
	printf("\n\t\t\t----------------CHI TIET DON HANG--------------------\n");
	showCart(O.C);
}

void updateOrder(Order &O) {
	O.status = O.status + 1;
}

void writeFileOrderTest(Order O, char* fileName) {
	FILE* fOut;
	fOut = fopen(fileName, "a");
	fprintf(fOut, "%-10d %-10d %-20s %-20s %-20s\n", O.id, O.status, O.I.name, O.I.phone, O.I.address);
	Cart* search = O.C;
	int count = lengthCart(search);
	fprintf(fOut, "%d\n", count); //ghi so luong hang trong gio
	while(search!=NULL) {
		fprintf(fOut, "%-10d %-20s %-10.2f\n", search->P.id, search->P.name,  search->P.price);
		search = search->next;
	}

	
//	fwrite(&O.id, sizeof(int), 1, fOut);
//	fwrite(&O.I, sizeof(O.I), 1, fOut);
//	fwrite(&O.status, sizeof(int), 1, fOut);
//	fwrite(&count, sizeof(int), 1, fOut);
//	while(search!=NULL) {
//		fwrite(&search->P, sizeof(search->P), 1, fOut);
//		search = search->next;
//	}
	fclose(fOut);
}

//Xu ly doc file

void readFileOrderTest(FILE* f, Order& O) {
	fscanf(f, "%10d %10d %20[^\n] %20s %20[^\n]\n", &O.id, &O.status, O.I.name, &O.I.phone, O.I.address);
	Cart* search = NULL;
	int n, i;
	fscanf(f,"%d\n",&n); //doc so luong sp trong chi tiet don hang
	for(i = 0; i<n; i++) {
		Product P;	
		fscanf(f, "%10d %20[^\n] %f\n", &P.id, P.name,  &P.price);
		appendCart(search, P);
	}
	O.C = search;
}

void updateFileOrder(Order O) {
	FILE *f1, *f2;
	int found = 0;
	f1 = fopen("test.txt", "r");
	f2 = fopen("temp.txt", "w");
	if(f1) {
		for(;;) {
			Order temp;
			readFileOrderTest(f1, temp);
			if(O.id == temp.id) {
				found = 1;
				updateOrder(temp);
			}
			writeFileOrderTest(temp, "temp.txt");
			if(feof(f1)) {
				break;
			}
		}
	}
	fclose(f1);
	fclose(f2);
	if(found) {
		f2 = fopen("temp.txt", "r");
		f1 = fopen("test.txt", "w");
		if(f2) {
			for(;;) {
				Order temp;
				readFileOrderTest(f2, temp);
				writeFileOrderTest(temp, "test.txt");
				if(feof(f2)) {
					break;
				}
			}
		}
		fclose(f1);
		fclose(f2);
	}
	else {
		printf("\n\n\tKhong tim thay!");
	}
}
