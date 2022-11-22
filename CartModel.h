#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include "helper.h"
#include "ProductModel.h"
#define CartModel_h
#pragma once
struct Cart
{
	Product P;
	struct Cart* next;
};
typedef struct Cart Cart;

//Khoi tao dslk san pham thuoc gio hang, moi node la 1 san pham
Cart* newProduct(Product P);
//Them san pham vao dslk cua gio hang vi gio hang co nhieu san pham
void appendCart(Cart *&Head, Product P);
//Hien thi gio hang
void showCart(Cart* Head);
//Xoa gio hang
void destroyCart(Cart*& Head);
Cart* destroyCartV2(Cart*& Head);
//Tinh do dai cua dslk
int lengthCart(Cart* Head);
