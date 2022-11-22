
#include "MainController.h"

void mainController(){
	Product P[100];
	int num;
	FILE* f;
//	createProduct(P, num); //tao san pham mac dinh
	//khoi tao con tro cart
	Cart* Cart = NULL; //Khoi tao gio hang
	Queue* Pending = new Queue(); //Khoi tao row cua 1 hang doi
	init(Pending);
	Queue* Shipping = new Queue();
	init(Shipping);
	Queue* Complete = new Queue();
	init(Complete);
	menuHome(Cart, P, Pending, Shipping, Complete, f, num);
}
