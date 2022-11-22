#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include "OrderModel.h">
#include "helper.h"
#define QueueModel_h
#pragma once

//Cau truc cua 1 Queue pending
struct Queue
{
	Order O;
	struct Queue* next;
};
typedef struct Queue Queue;

/////---------------------Hang doi cho xu ly
//Khoi tao 1 hang trong queue
Queue *newNode(Order O);
//Khoi tao hang doi pending
void init(Queue*& Q);
//Kiem tra hang doi rong
int isEmpty(Queue Q);
//Them order vao cuoi hang doi pending
void enQueue(Queue *&Q, Order O);
//Hien thi queue pending
void showQueue(Queue* Q);
//Lay 1 phan tu cua queue
Order getOrder(Queue* Q);
//Hien thi 1 queue
void showFirstOrder(Queue* Q);

//Xoa phan tu khoi hang doi
void deQueue(Queue *&Q);
/////--------------------------------

////------------------Xu ly file
void readFileTest(Queue *&Q, Queue *&S, Queue *&C, FILE* f);


