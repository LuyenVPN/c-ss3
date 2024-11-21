#include <stdio.h>

int main(){
	float pi= 3.14, v, s ; 
	int r;
	printf("nhap ban kinh hinh tron:");
	scanf("%d", &r);
	v=(float)2*pi*r;
	s=(float)pi*r*r;
	printf("chu vi hinh tron la: %.2f\n", v);
	printf("dien tich hinh tron la: %.2f\n", s);
	return 0; 
} 
