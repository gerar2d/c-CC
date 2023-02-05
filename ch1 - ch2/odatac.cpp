#include <cstdio>

struct Book {
char name[256]; 
int year;
int pages;
bool hardcover;
};

int main() {
Book neuromancer;
neuromancer.pages = 271;
neuromancer.hardcover = true;
printf("Neuromancer has %d pages and is a.\n", neuromancer.pages);
printf("Is neuromancer a hardcover: %d\n", neuromancer.hardcover);
}