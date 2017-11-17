/* The Decoder */
#include <cstdio>

int main()
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        putchar(ch != '\n' ? ch - 7 : ch);
    }
}
