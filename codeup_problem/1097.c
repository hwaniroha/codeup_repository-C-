// #include <stdio.h>

// int main() {
//   int i,j, arr[20][20], n, x, y; 
//   for (i=1; i<=19; i++){	//바둑판 상황
//       for (j=1; j<=19; j++)
//           scanf("%d", &arr[i][j]);
//   }

//   scanf("%d", &n);	//횟수 입력
//   for (i=0; i<n; i++) {	//뒤집기 n번 입력
//       scanf("%d %d", &x, &y);
//       for (j=1; j<=19; j++) {
//           if (arr[x][j] == 1)
//               arr[x][j] = 0;
//           else
//               arr[x][j] = 1;
//       }
//       for (j=1; j<=19; j++) {
//           if (arr[j][y] == 1)
//               arr[j][y] = 0;
//           else
//               arr[j][y] = 1;
//       }
//   }

//   for (i=1; i<=19; i++){
//       for (j=1; j<=19; j++)
//           printf("%d ", arr[i][j]);
//       printf("\n");
//   }

//   return 0;
// }
