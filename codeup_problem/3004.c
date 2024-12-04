#include <stdio.h>
int n;
int main(void) {
  scanf("%d", &n);
  int arr[n -1];
  for (int i = 0; i < n - 1; i++) {
    scanf("%d", &arr[i]);
  }
  
  return 0;
}