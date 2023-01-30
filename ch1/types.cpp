#include <cstdio>
using namespace std;

int main()
{
    unsigned short a =  0b10101010;
    printf("%hu\n", a);

    int b = 0123;
    printf("%d\n", b);

    unsigned long long d = 0xFFFFFFFFFFFFFFFF;
    printf("%llu\n", d);

    unsigned int e = 3669732608;
    printf("Yabba %x!\n", e);
    
    unsigned int f = 69;
    printf("There are %u, %o leaves here.\n", f,f);

    int mit_zip_code = 02137;
}

// binary = 0b
// octal = 0
// decimal is default
// hexadecimal = 0x

