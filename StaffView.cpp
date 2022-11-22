#include "MenuStaff.h"

void showOrderPending(Queue*& Q, Queue*& S) {
	printf("\n\t\t\t\t----------------DON HANG CHO XU LY--------------------\n\n");
	if(Q==NULL) {
		printf("\n\t\tTRONG!");
	}
	else {
		//Hien thi don hang dau queue
		showFirstOrder(Q);
		int subChoice;
		printf("\n\n\t\t\t\t1. Xu ly don hang");
		printf("\n\n\t\t\t\t2. Huy don hang");
		printf("\n\n\t\t\t\t0. Tro ve");
		subChoice = pressChoice();
		//Goi ham xu ly don hang, update status = 2 va xoa khoi hang doi pending
		if(subChoice == 1) {
			Order firstNode = getOrder(Q);
			updateOrder(firstNode); //Update status chuyen vao hang doi dang xu ly
			enQueue(S, firstNode); //add vao queue shipping
			//update status o file
			updateFileOrder(firstNode);
			deQueue(Q); //xoa khoi Q cho xu ly
			printf("\n\n\t\tXu ly thanh cong!");
		}
		else if(subChoice == 2) {
			printf("\n\t\t Huy don hang thanh cong!");
		}
		else if(subChoice == 0) {
			return;
		}
		else {
			printf("\n\t\tKhong hop le!");
		}
	}
}

void showOrderShipping(Queue*& C, Queue*& S) {
	printf("\n\t\t\t\t----------------DON HANG DANG GIAO HANG--------------------\n\n");
	if(S==NULL) {
		printf("\n\t\tTRONG!");
	}
	else {
		//Hien thi don hang dau queue
		showFirstOrder(S);
		int subChoice;
		printf("\n\n\t\t\t\t1. Xac nhan hoan thanh");
		printf("\n\n\t\t\t\t0. Tro ve");
		subChoice = pressChoice();
		//Goi ham xu ly don hang, update status = 2 va xoa khoi hang doi shipping
		if(subChoice == 1) {
			Order firstNode = getOrder(S);
			updateOrder(firstNode); //Update status chuyen vao hang doi da hoan thanh
			enQueue(C, firstNode);//Add sang Q da hoan thanh
			//update status o file
			updateFileOrder(firstNode);
			deQueue(S); //xoa khoi Q dang giao hang
			printf("\n\n\t\tXu ly thanh cong!");
		}
	}
}

void showOrderComplete(Queue*& C) {
	printf("\n\t\t\t----------------DON HANG DA HOAN THANH--------------------\n\n");
	if(C==NULL) {
		printf("\n\t\tTRONG!");
	}
	else {
		showQueue(C); //Hien thi don hang hoan thanh
	}
}
