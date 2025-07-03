#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("Char: %c%s%d\n....Everything is OK!\n", 'A', "hello", 28);
	ft_printf("String: %s\n", "Hello 42");
	ft_printf("Decimal: %d\n", -42);
	ft_printf("Unsigned: %u\n", 3000000000);
	ft_printf("Hex lowercase: %x\n", 3735928559U);
	ft_printf("Hex uppercase: %X\n", 3735928559U);
	ft_printf("Pointer: %p\n", (void *)0x1234abcd);
	ft_printf("Percent: %%%%\n");

	return (0);
}