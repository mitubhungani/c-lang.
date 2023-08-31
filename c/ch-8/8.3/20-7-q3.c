#include <stdio.h>

main() {
  int row, col, i, j, sum = 0;

  printf("Enter the array's row & column size: ");
  scanf("%d %d", &row, &col);

  int a[row][col];

  printf("Enter array's elements:\n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  for (i = 0; i < row; i++) {
    sum += a[i][i];
  }

  printf("The sum of diagonal elements is: %d\n", sum);

}

