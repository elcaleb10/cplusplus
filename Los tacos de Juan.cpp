#include <stdio.h>

int main() {
  // Declaraci�n de variables
  int n, o, p, c;
  int costoTotal = 0;
  int tacosIndividuales = 0;
  int ordenes = 0;
  int platones = 0;
  int canastas = 0;

  // Lectura de datos de entrada
  scanf("%d %d %d %d", &n, &o, &p, &c);

  // C�lculo de la cantidad de canastas
  canastas = n / c;
  n %= c;
  costoTotal += canastas * 1500;

  // C�lculo de la cantidad de platones
  platones = n / p;
  n %= p;
  costoTotal += platones * 250;

  // C�lculo de la cantidad de ordenes
  ordenes = n / o;
  n %= o;
  costoTotal += ordenes * 50;

  // C�lculo de la cantidad de tacos individuales
  tacosIndividuales = n;
  costoTotal += tacosIndividuales * 10;

  // Impresi�n de resultados
  printf("%d %d %d %d %d\n", costoTotal, tacosIndividuales, ordenes, platones, canastas);

  return 0;
}

