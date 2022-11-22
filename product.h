#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define LENGTH 3
#define LENGTHCART 10

//Cau truc cua san pham.. Chi la demo thoi, co the sua
struct Product
{
	char name[50];
	float price;
};
typedef struct Product Product;

//Tao danh sach san pham
void createProduct(Product P[]);
//Hien thi danh sach san pham
void showProduct(Product P[]);
