#include <iostream>
#include <iomanip>

int** newArray(const int n, const int m)
{
    int** arr = new int*[n];
    for(int i = 0; i < n; ++i)
        arr[i] = new int[m];
    return arr;
}

int** Transp(int** matrix, const int n, const int m)
{
    int** res = newArray(m, n);

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            res[j][i] = matrix[i][j];

    return res;
}

void printArray(int** arr, const int n, const int m)
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
            std::cout << std::setw(4) << arr[i][j];
        std::cout << '\n';
    }
}

int main() {
    int n = 2;
    int m = 3;

    int** mtrx = newArray(n, m);

    for(int i=0; i < n; i++)
        for(int j=0; j < m; j++)
            mtrx[i][j]=rand()%10;

    printArray(mtrx, n, m);

    int** tmtrx = Transp(mtrx, n, m);

    std::cout << "Result: " << std::endl;
    printArray(tmtrx, m, n);

    return 0;
}