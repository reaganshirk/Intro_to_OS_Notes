#include <stdio.h>

void foo(int *x, char y, char *z)
{
    printf("FOO\n");
    printf("%d %c %s\n", *x, y, z);
    *x = 6;
    z[3] = '#';
    printf("%d %c %s\n", *x, y, z);
    printf("FOO DONE\n");
}

int main(int argc, char** argv)
{
    int a = 2;
    char b = 'a';
    // C has a null value at the end of strings so the array is 7 long
    char c[] = "foobar";

    printf("%d %c %s\n", a, b, c);
    printf("%x %x %x\n", &a, &b, c);

    foo(&a, b, c);
    printf("%d %c %s\n", a, b, c);
}
