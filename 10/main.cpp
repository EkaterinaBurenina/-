#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

void swap_min( int *m[], int rows, int cols )
{
    int min_row = 0, min_col = 0;

    for ( int i = 0; i != rows ; i++ )
    {
        for ( int j = 0; j != cols ; j++ )
        {
            if ( m[i][j] < m[min_row][min_col] )
            {
                min_row = i;
                min_col = j;
            }
        }
    }

    if ( min_row != 0 )
    {
        int *tmp = m[0];
        m[0] = m[min_row];
        m[min_row] = tmp;
    }
}


int main() {

    int rows = 4;
    int cols = 5;

    int **m = new int *[rows];

    for ( int i = 0; i < rows; i++ )
    {
        m[i] = new int[cols];
    }

    std::srand( ( int )std::time( nullptr ) );

    for ( int i = 0; i < rows; i++ )
    {
        for ( int j = 0; j < cols; j++ )
        {
            m[i][j] = std::rand() % ( rows * cols );
        }
    }

    for ( int i = 0; i < rows; i++ )
    {
        for ( int j = 0; j < cols; j++ )
        {
            std::cout << std::setw( 2 ) << m[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    swap_min( m, rows, cols );

    for ( int i = 0; i < rows; i++ )
    {
        for ( int j = 0; j < cols; j++ )
        {
            std::cout << std::setw( 2 ) << m[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for ( int i = 0; i < rows; i++ )
    {
        delete [] m[i];
    }

    delete [] m;
    return 0;
}