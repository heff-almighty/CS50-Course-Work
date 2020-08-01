#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string ("Hi, what's your name?\n");
    printf("Hello, %s", name);
    printf(". It is nice to meet you.\n");
}
