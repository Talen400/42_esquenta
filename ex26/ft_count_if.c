//#include <stdio.h>

//int	ft_strlen(char *str);

int	ft_count_if(char **tab, int (*f)(char*));

/*int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	if (len > 0)
		return (1);
	return (0);
}*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;

	count = 0;
	while (*tab != NULL)
	{
		if (f(*tab))
		{
			count++;
		}
		tab++;
	}
	return (count);
}
/*
int	main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", ft_count_if(argv, ft_strlen));
}*/
