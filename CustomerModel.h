#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#define CustomerModel_h
#pragma once

struct Customer
{
	char name[150];
	char phone[50];
	char address[150];
};
typedef struct Customer Customer;

//Khoi tao 1 khach hang moi
Customer newCustomer();

//Hien thi giao dien thong tin khach hang
void viewInfoCustomer(Customer C);

