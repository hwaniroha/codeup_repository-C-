#include <stdio.h>

int main(void) {
  int arr[7] = {};
  int sum = 0;
  for(int i = 0; i < 7; i++) {
    scanf("%d ", &arr[i]);
  }
  for(int i = 0; i < 7; i++) {
    if (arr[i] % 2 == 0) {
      sum += arr[i];
    }
  }
  printf("%d", sum);
  return 0;
}