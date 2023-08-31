#include <stdio.h>

main() {
    int arr[5][5], sum = 0,i,j;

    printf("Enter array's elements:\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The 5x5 array is:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 0 || j == 0 || i == 4 || j == 4) {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nThe sum of boundary elements of the array: %d\n", sum);

}

