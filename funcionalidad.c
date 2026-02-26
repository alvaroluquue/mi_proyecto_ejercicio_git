#include <stdio.h>

int factorial(int n) {
  if (n < 0) {
    return -1; // Error: no existe factorial de negativos
  }

  int resultado = 1;
  for (int i = 1; i <= n; i++) {
    resultado *= i;
  }

  return resultado;
}

int main() {
  int numero;

  printf("Introduce un numero: ");
  scanf("%d", &numero);

  int resultado = factorial(numero);

  if (resultado == -1) {
    printf("No se puede calcular el factorial de un numero negativo.\n");
  } else {
    printf("El factorial de %d es %d\n", numero, resultado);
  }

  return 0;
}
