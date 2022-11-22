#include "ProductModel.h"
//ghi file
void writefile(Product* P, FILE *f, int num){
	//FILE *f;
	f = fopen("sanpham.txt", "a");
	//fprintf(wf, "%d\n", );
	int i;
	for (i = 0; i < num; i++){
		Product po = P[i];
		fprintf(f,"%-10d %-20s %-10.2f \n", po.id, po.name, po.price);
	}
	fclose(f);
}

//doc file
//P controller
void readfile (Product* P, FILE *f, int& num){
	f = fopen ("sanpham.txt", "r");
	int i = 0;
	if (f){
		for (;;) {
			Product p;
			fscanf (f, "%10d %20[^\n] %f \n", &p.id, p.name, &p.price);
			P[i++] = p;
			if (feof(f)){
				break;
			}			
		}
	}
	fclose (f);	
	num = i;
//	printf("\n\t%d", num);
}

