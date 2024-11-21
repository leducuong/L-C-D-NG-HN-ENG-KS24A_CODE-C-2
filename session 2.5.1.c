#include <stdio.h>
int main() {
    float length, width, perimeter, area;
    printf("Nhap chieu dài cua hình chu nhat: ");
    scanf("%f", &length);
    printf("Nhap chieu rong cua hình chu nhat: ");
    scanf("%f", &width);
    
      perimeter = 2 * (length + width);
    
      area = length * width;
      
      printf("Chu vi hình chu nhat: %.2f\n", perimeter);
      printf("Dien tích hình chu nhat: %.2f\n", area);
        return 0;
}
