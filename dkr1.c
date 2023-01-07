#include <stdio.h>
#include <stdlib.h>
// a^n/(a+n)

int main() {
    int N;
    double a;
    double sum = 0;
  do {
    printf("Enter value N(N>=1): ");
    scanf("%d", &N);
  } while(N<1);
  do{
    printf("\nEnter value a(a>=0): ");
    scanf("%lf", &a);
  }while(a<0);

  system("cls");

    double temp = a;
    for (int n = 1; n <= N; n++) {
        sum += temp /a + n;
        temp *= a;
    }

    printf("\nSum = %.2lf", sum);

    return 0;
}
