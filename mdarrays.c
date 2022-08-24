#include <stdio.h>

void mult_2d( int rows, int columns, int matrix[rows][columns] )
{
    for ( int i = 0; i < rows; i++ )
    {
        for ( int j = 0; j < columns; j++ )
        {
            matrix[i][j] *= 2;
        }
    }
}

int main( void )
{
    int a[5][5] = {[0][0]=1, [1][1]=1, [2][2]=1, [3][3]=1, [4][4]=1};
    printf("Original matrix:\n");
    for ( int i = 0; i < 5; i++ )
    {
        for ( int j = 0; j < 5; j++ )
        {
            printf("(%d, %d) = %d\n", i, j, a[i][j]);
        }
    }
    mult_2d(5, 5, a);
    printf("New matrix:\n");
    for ( int i = 0; i < 5; i++ )
    {
        for ( int j = 0; j < 5; j++ )
        {
            printf("(%d, %d) = %d\n", i, j, a[i][j]);
        }
    }
}
