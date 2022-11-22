#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "CartModel.h"
#include "CustomerModel.h"
#include "helper.h"
#define OrderModel_h
#pragma once
//Cau truc cua 1 order 
struct Order
{
	int id;
	Customer I;
	Cart* C;
	int status;
	int test;
};
typedef struct Order Order;

Order newOrder(Cart* C, Customer &I);

void showOrder(Order O);

//Cap nhat trang thai cua Order
void updateOrder(Order &O);

//Xu ly ghi file

void writeFileOrderTest(Order O, char* fileName);

//Xu ly doc file
void readFileOrderTest(FILE* f, Order& O);

//update file
void updateFileOrder(Order O);


