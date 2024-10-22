#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {

  int numberOfCoins;
  int coinsValues[100];
  float totalSum = 0;
  int cont = 0;

  scanf("%d", &numberOfCoins);

  for(int i = 0; i < numberOfCoins; i++) {
    scanf("%d", &coinsValues[i]);
    totalSum += coinsValues[i];
  }

  float half = totalSum/2;
  int resultSum = 0;

  qsort(coinsValues, numberOfCoins, sizeof(int), compare);
  
  for(int i = numberOfCoins - 1; resultSum < half; i--) {
    resu += coinsValues[i];
    cont++;
  }

  printf("%d", cont);

  return 0;
}