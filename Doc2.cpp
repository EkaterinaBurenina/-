#include <stdio.h>
#include <iostream>

void func(int *mass1, int N)
{
    std::cout<<mass1[N-1]<<" ";
    if(N!=1)
      func(mass1, N - 1);
    else 
	return;
}


int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Russian");
    int i=0;
    int len = 1024;
    int mass[len];
    int N = 0;
    std::cout<<"Введите последовательность чисел, закончив ее 0"<<std::endl;
    
    int num = -1;
    while(num != 0 && i != len)
    {
      std::cin >> num;
      mass[i] = num;
      i++;
      N++;
    }
    func(mass, N - 1);
    std::cout<<std::endl;

    return 0;
}
