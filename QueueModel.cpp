#include "QueueModel.h"

//Khoi tao 1 order
Queue *newNode(Order O) {
	Queue *temp = new Queue();
	temp->O = O;
	temp->next = NULL;
	return temp;
}

//Khoi tao hang doi pending
void init(Queue*& Q) {
	Q = NULL;
}

//int isEmpty(qPending Q) {
//	if(Q == NULL) {
//		return 1;
//	}
//	return 0;
//}

//Them order vao cuoi hang doi pending
void enQueue(Queue *&Q, Order O) {
	Queue* temp = newNode(O);
	if(Q==NULL){
		Q = temp;
	}	
	else{
		Queue* search = Q;
		while (search->next != NULL)
		{
			search = search->next;
		}
		search->next = temp;
	}
}

//Hien thi queue pending
void showQueue(Queue* Q) {
	if(Q == NULL) {
		printf("\n\t\t\tTRONG!");
	}
	else{
		int count = 0;
		Queue* search = Q;
		while(search != NULL) {
			count++;
			printf("\n\t\t\tSTT: %d", count);
			showOrder(search->O);
			search = search->next;
		}
	}
}

void showFirstOrder(Queue* Q) {
	showOrder(Q->O);
}

Order getOrder(Queue* Q) {
	return Q->O;
}

void deQueue(Queue *&Q) {
	Queue* del = Q;
	Q = Q->next;
	del->next = NULL;
	free(del);
	del = NULL;
}


void readFileTest(Queue *&Q, Queue *&S, Queue *&C, FILE* f) {
	f = fopen("test.txt", "r");
	if(f) {
		for(;;) {
			Order O;
			readFileOrderTest(f, O);
			if(O.status == 1) {
				enQueue(Q, O);
			}
			else if(O.status == 2) {
				enQueue(S, O);
			}
			else if(O.status == 3) {
				enQueue(C, O);
			}
			else {
				
			}
			if(feof(f)) {
				break;
			}
		}
	}
	fclose(f);
}


