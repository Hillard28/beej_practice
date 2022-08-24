#include <stdio.h>

void mult_2(int *a, int len) {
    int i;
    for (i = 0; i < len; i++) {
        a[i] *= 2;
    }
}

void mult_2d(int a[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            a[i][j] *= 2;
        }
    }
}

int main(void) {
    int i, j, k;
    int arr[4] = {56, 56, 27, 24};
    int mat[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};
    int mat2[5] = {69, 0, 69, 0, 69};

    for (k = 0; k < 4; k++) {
        printf("This family members' age is %d\n", arr[k]);
    }
    printf("The size of the array is %zu elements\n", sizeof(arr) / sizeof(int));

    printf("When doubled, the family members ages are:\n");
    mult_2(arr, 4); /*Passing just an array variable */
    for (i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }
    printf("When doubled again, the ages are:\n");
    mult_2(&arr[0], 4); /*Passing a pointer to the first element of the array */
    for (i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }

    printf("Looping through single dimensional matrix...\n");
    for (i = 0; i < 5; i++) {
        printf("(%d) = %d\n", i, mat2[i]);
    }

    printf("Looping through a two dimensional matrix...\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("(%d, %d) = %d\n", i, j, mat[i][j]);
        }
    }

    printf("Doubling these values, we get:\n");
    mult_2d(mat);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("(%d, %d) = %d\n", i, j, mat[i][j]);
        }
    }
}
