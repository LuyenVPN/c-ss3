#include <stdio.h>

int main(){
	int diemtoan, diemvan, diemanh, tongdiem;
	float trungbinh;
	printf("diem toan:");
	scanf("%d", &diemtoan);
	fflush(stdin);
	printf("diem van:");
	scanf("%d", &diemvan);
	fflush(stdin);
	printf("diem anh:");
	scanf("%d", &diemanh);
	tongdiem= diemtoan + diemvan + diemanh;
	trungbinh= (float)tongdiem/3 ;
	printf("tong diem la: %d\n",tongdiem);
	printf("diem trung binh la: %.2f\n",trungbinh);
	
	return 0;
}
