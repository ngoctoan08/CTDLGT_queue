#include <stdio.h>
#include <conio.h>
#include "QueueModel.h"
#include "helper.h"
#define MenuStaff_h
#pragma once

//Menu giao dien khách hàng
void menuStaff(Product P[], Queue*& Q, Queue*& S, Queue*& C, FILE* f, int &num);

void menuOrder(Queue*& Q, Queue*& S, Queue*& C);

void showOrderPending(Queue*& Q, Queue*& S);

void showOrderShipping(Queue*& C, Queue*& S);

void showOrderComplete(Queue*& C);

void menuProduct(Product P[], FILE *f, int &num);
