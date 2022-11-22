#include "CartModel.h"
//Khoi tao san pham Cart
Cart* newProduct(Product P) {
	Cart* newNode = new Cart();
	newNode->P = P;
	newNode->next = NULL;
	return newNode;
};

//Them san pham vao dslk cua gio hang vi gio hang co nhieu san pham
void appendCart(Cart *&Head, Product P) { //Truyen tham bien vi ta muon su thay doi cua Head khi goi ham nay
	Cart* temp = newProduct(P); //temp la 1 con tro chua gia tri cua san pham
	if (Head == NULL) {
		Head = temp;
//		printf("\n\t\tTHEM %s VAO GIO HANG THANH CONG!\n", temp->P.name);
	}
	else {
		Cart* search = Head;
		while (search->next != NULL)
		{
			search = search->next;
		}
		search->next = temp;
//		printf("\n\t\tTHEM %s VAO GIO HANG THANH CONG!\n", temp->P.name);
	}
}

//Xoa Cart
void destroyCart(Cart*& Head) {
	Cart *search = Head;
	while(search != NULL) {
		free(search);
		search = search->next;
	}
	Head = NULL;
}

int lengthCart(Cart* Head) {
	Cart* Search = Head;
	int count = 0;
	while(Search != NULL) {
		count ++;
		Search = Search->next;
	}
	return count;
}
