#include <stdio.h>

int hcf();

int main()
{
    int num1, num2;
    printf("Enter the numbers to find the common diviser of ");
    scanf("%d %d", &num1, &num2);
    printf("%d", hcf(num1, num2));
}
int hcf(int a, int b) {
  if (b == 0) {
    return a;
  }
  else {
    return hcf(b, a % b);
  }
}