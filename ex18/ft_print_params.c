/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 10:56:21 by tlavared          #+#    #+#             */
/*   Updated: 2025/07/10 10:56:56 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "../ft_putchar.c"

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	len;

	if (argc == 1)
		return (1);
	len = 1;
	while (len < argc)
	{
		ft_putstr(argv[len]);
		ft_putchar('\n');
		len++;
	}
}
