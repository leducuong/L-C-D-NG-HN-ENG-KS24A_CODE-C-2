#include <stdio.h>
int main() {
    float length, width, perimeter, area;
    printf("Nhap chieu d�i cua h�nh chu nhat: ");
    scanf("%f", &length);
    printf("Nhap chieu rong cua h�nh chu nhat: ");
    scanf("%f", &width);
    
      perimeter = 2 * (length + width);
    
      area = length * width;
      
      printf("Chu vi h�nh chu nhat: %.2f\n", perimeter);
      printf("Dien t�ch h�nh chu nhat: %.2f\n", area);
        return 0;
}
