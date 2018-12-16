#include <iostream>

char *resize(const char *str, unsigned size, unsigned new_size)
{
    char * new_str = new char[new_size];
    for(int i = 0; i < size && i < new_size; ++i)
        new_str[i] = str[i];
    delete[] str;

    return new_str;
}

int main() {
    char* str = new char[5];
    std::cout << resize(str, 5, 15) << std::endl;
    return 0;
}