/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:59:52 by tlavared          #+#    #+#             */
/*   Updated: 2025/07/10 16:59:53 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../ft_putchar.c"

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2);

int		ft_strcmp_bool(char *s1, char *s2);

void	ft_sort_ascii(char **str, int count);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp_bool(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if ((unsigned char) *s1 > (unsigned char) *s2)
		return (1);
	return (0);
}

void	ft_sort_ascii(char **str, int count)
{
	int		a;
	int		b;
	char	*t;

	a = 0;
	while (a < count)
	{
		b = 0;
		while (b < count - 1)
		{
			if (ft_strcmp_bool(str[b], str[b + 1]))
			{
				t = str[b + 1];
				str[b + 1] = str[b];
				str[b] = t;
			}
			b++;
		}
		a++;
	}
}

int	main(int argc, char *argv[])
{
	int	len;

	if (argc == 1)
		return (1);
	ft_sort_ascii(argv + 1, argc - 1);
	len = 1;
	while (len < argc)
	{
		ft_putstr(argv[len]);
		ft_putchar('\n');
		len++;
	}
}
