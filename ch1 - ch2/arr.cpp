#include <cstdio>

int main ()
{
    int arr[] = {1, 2, 3, 4};
    printf("The third element is %d.\n", arr[2]);
    arr[2] = 100;
    printf("The third element is %d.\n", arr[2]);
    arr[5] = 200;
    printf("The sixth element is %d.\n", arr[5]);
}