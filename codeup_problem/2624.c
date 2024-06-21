// #include <stdio.h>
// #include <math.h>

// int checkprime(int number) {
//     if (number == 2) {
//         return 1;
//     }else if (number % 2 == 0) {
//         return 0; 
//     }
//     for (int i = 3; i <= sqrt(number); i += 2) {
//         if (number % i == 0) {
//             return 0; 
//         }
//     }
//     return 1;
// }
// int sumprimes(int n) {
//     int sum = 0;
//     for (int i = 2; i <= n; i++) {
//         if (checkprime(i)) {
//             sum += i;
//         }
//     }
//     return sum;
// }
// int main(void) {
//     int n;
//     scanf("%d", &n);
//     int sum = sumprimes(n);
//     printf("%d", sum);

//     return 0;
// }
