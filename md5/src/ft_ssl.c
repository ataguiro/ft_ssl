#include "ft_ssl.h"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		write(2, "usage: ft_ssl command [command opts] [command args]\n", 52);
		return (EXIT_FAILURE);
	}
	(void)av;
	return (EXIT_SUCCESS);
}
