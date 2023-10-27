#include <unistd.h>

//display character

void	_putchar(char c)
{	
	write(1, &c, 1);
}
