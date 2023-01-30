#include <cstdio>
using namespace std;

int main()
{
    char16_t a = u'l';
    char x = 'W';
    wchar_t y = L'Z';
    printf("Windows binaries start with %c%lc%lc.\n",x,y,a);
}