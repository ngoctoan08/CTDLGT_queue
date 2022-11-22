#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define ProductModel_h
#pragma once
//Cau truc cua san pham.. Chi la demo thoi, co the sua
struct Product
{
	int id;
	char name[50];
	float price;
};
typedef struct Product Product;

//Doc file
void readfile(Product* P, FILE* f, int& num);
//ghi gile
void writefile(Product* P, FILE *f, int num);

//Tao danh sach san pham
void createProduct(Product P[], int &num);
//Hien thi danh sach san pham
void showProduct(Product P[], int num);
//Hien thi chi tiet san pham
void showDetailProduct(Product P);
