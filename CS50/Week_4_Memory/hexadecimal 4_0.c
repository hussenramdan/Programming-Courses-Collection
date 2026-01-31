#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 255; i++)
    {
        printf("Decimal: %3d   Hexadecimal: 0x%02X\n", i, i);
    }

    return 0;
}
