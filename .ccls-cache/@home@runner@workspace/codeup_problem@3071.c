// #include <stdio.h>
// int number;
// void primenumber(int a[number]) {
//     for(int i=2;i<=number;i++) {
//         a[i] = i;
//     }

//     for(int i=2;i<=number;i++) {
//         if(a[i]==0) continue;
//         for(int j=2*i;j<=number; j+=i) {
//             a[j] = 0;
//         }
//     }

//     for(int i=2;i<=number;i++) {
//         if(a[i]!=0) printf("%d ", a[i]);
//     }
// }

// int main(void) {
//     scanf("%d", &number);
//     int a[number];
//     primenumber(a);
//     return 0;
// }