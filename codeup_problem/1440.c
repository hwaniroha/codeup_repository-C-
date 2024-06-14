// #include<stdio.h>
// int main(void) {
//   int n, i, j; //n, i, j 선언
//   scanf("%d", &n); // n 입력
//   int arr[n];
//   for(i = 0; i < n; i++) { //배열 입력
//     scanf("%d", &arr[i]);
//   }
//   for(i = 0; i < n; i++) { //비교 및 출력
//     printf("%d:", i + 1);
//     for(j = 0; j < n; j++) { //중복 제거
//       if (i == j) {
//       } else if(arr[i] < arr[j]) {
//         printf(" <");
//       } else if (arr[i] == arr[j]) {
//         printf(" =");
//       } else {
//         printf(" >");
//       }
//     }
//     printf("\n"); // 줄바꿈
//   }
//   return 0;
// }