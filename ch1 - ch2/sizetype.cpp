//sizes of types change based on operating system.  CHECKOUT LONG'S SIZE IN LINUX/MAC(8) AND WINDOWS(4).

#include <cstddef>
#include <cstdio>

int main()
{
    size_t size_c = sizeof(char);
    printf("char: %zu\n", size_c);  //zu = size_t

    size_t size_s = sizeof(short);
    printf("short: %zu\n", size_s);

    size_t size_i = sizeof(int);
    printf("int: %zu\n", size_i);
    
    size_t size_l = sizeof(long);
    printf("long: %zu\n", size_l);
    
    size_t size_ll = sizeof(long long);
    printf("long long: %zu\n", size_ll);
}

