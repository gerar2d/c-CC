#include <cstdio>
#include <cstddef>

int main()
{
    unsigned long maximum = 0;
    unsigned long values[] = {10, 50, 20, 40, 0};
    short array[] = {104, 105, 32, 98, 105, 108, 108, 0};  // each short = 2 byte 2*8 = 16 / 2 = 8.
    for (size_t i = 0; i < 5; i++)
    {
        if (values[i] > maximum) maximum = values[i];
    }
    printf("The maximum value is %lu.\n", maximum);
    
    for (unsigned long value : values)
    {
        if (value > maximum) maximum = value;
    }
    printf("The maximum value is %lu.\n", maximum);

    size_t n_elements = sizeof(array) / sizeof(short); // 16 / 2
    printf("size_t %lu.\n", n_elements);

    // C-type string blocks/arrays.

    char english[] = "A book holds a house of gold.";
    char16_t chinese[] = u"\u4e66\u4e2d\u81ea\u6709\u9ec4\u91d1\u5c4b";
    printf("A Book holds %s\n", english);

}