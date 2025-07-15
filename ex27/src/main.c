#include "../include/ft_display_file.h"

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (argc != 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	open(argv[1], O_RDONLY);
	return (0);
}
