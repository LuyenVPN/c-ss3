#include <stdio.h> 

int main() {
    float canhday, chieucao, S;
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &canhday); 
    printf("Nhap do dai chieu cao cua tam giac: ");
    scanf("%f", &chieucao); 
    S= 0.5 * canhday * chieucao;
    printf("Dien tich tam giac la: %.2f\n", S);

    return 0; 
}
