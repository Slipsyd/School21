
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

#include "ft_ft.c"

int main()
{
	ft_ft(nbr);
	return(0);
}
