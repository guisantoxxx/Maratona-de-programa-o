//https://codeforces.com/problemset/problem/96/A

#include <Stdio.h>

int main() {

  char numbers[100];

  scanf("%s", numbers);

  int cont = 1;
  int currentNumber = numbers[0];

  for(int i = 1; numbers[i] != '\0'; i++) {
    if(currentNumber == numbers[i]) {
      cont++;
    }
    else {
      currentNumber = numbers[i];
      cont = 1;
    }

    if(cont == 7) {
      printf("YES");
      return 0;
    } 
  }

  printf("NO");

  return 0;
}