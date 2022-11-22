#include <stdio.h>
#include <conio.h>
#include "ProductController.h"
#include "CartController.h"
//#include "CustomerModel.h"
//#include "OrderModel.h"
#include "QueueModel.h"
#include "helper.h"
#define MenuCustomer_h
#pragma once

//Menu giao dien khách hàng
void menuCustomer(Cart*& Head, Product P[], Queue*& Q, FILE* f, int num);

void confirmOrder(Queue*& Q, Cart*& Head, Order O);
