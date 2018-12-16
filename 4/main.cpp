#include <iostream>
#include <string>
using namespace std;

unsigned strlen(const char *str)
{
    unsigned len = 0;
    while(*str++) len++;

    return len;
}
int main() {

    const char *str = "Hello word";

    std::cout << strlen(str) << std::endl;

    return 0;
}