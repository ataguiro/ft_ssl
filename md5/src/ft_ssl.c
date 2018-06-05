#include "ft_ssl.h"

void	get_options(char **av)
{
	
}

int		main(int ac, char **av)
{
	if (ac < 2)
	{
		write(2, "usage: ft_ssl command [command opts] [command args]\n", 52);
		return (EXIT_FAILURE);
	}
	get_options(av);
	return (EXIT_SUCCESS);
}
