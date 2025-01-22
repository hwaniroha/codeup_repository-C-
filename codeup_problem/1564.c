#include <stdio.h>

int a, b;

int gcd(int n1,int n2) {
    int i = n1;
    while (1)
        if (n1 % i == 0 && n2 % i == 0 ) {
            break;
        }
        else {
            i--;
        }
    return i;
}
int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}