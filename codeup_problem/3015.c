// #include <stdio.h>

// typedef struct {
//    char name[10];
//    int score;
//    int num;
// }Student;
// int main(void) {
//    int n, m, i, j;
//    int maxIdx;
//    Student student[100];
//    Student temp;

//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++) {
//       scanf("%s %d", student[i].name, &student[i].score);
//       student[i].num = i;
//    }
//    //정렬
//    for (i = 0; i < n - 1; i++) {
//       maxIdx = i;
//       for (j = i + 1; j < n; j++) {
//          if (student[j].score > student[maxIdx].score)
//             maxIdx = j;
//            //만약 점수가 같다면 입력받은 순서가 적은것이 maxIdx가 된다
//          if (student[j].score == student[maxIdx].score)
//             if (student[j].num < student[maxIdx].num)
//                maxIdx = j;

//       }
//       temp = student[i];
//       student[i] = student[maxIdx];
//       student[maxIdx] = temp;
//    }
