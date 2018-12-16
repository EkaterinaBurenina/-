#include <iostream>
#include <string>
using namespace std;

void func(char *to, const char *from)
{
    for(;*to;++to);
    while(*to++=*from++);

}

int main() {

char s[100] = "AAA";
func(s, " BBB");

std::cout << s << std::endl;

    return 0;
}