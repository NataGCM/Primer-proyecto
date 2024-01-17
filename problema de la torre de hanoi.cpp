#include <stdio.h>

void hanoi(int n, char inicio, char fin, char aux) {
  if (n == 1) {
    printf("Mover disco 1 de %c a %c\n", inicio, fin);
    return;
  }

  hanoi(n - 1, inicio, aux, fin);
  printf("Mover disco %d de %c a %c\n", n, inicio, fin);
  hanoi(n - 1, aux, fin, inicio);
}

int main() {
  int n;
  printf("Ingrese el número de discos: ");
  scanf("%d", &n);
  hanoi(n, 'A', 'C', 'B');
  return 0;
}

