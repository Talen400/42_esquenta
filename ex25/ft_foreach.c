/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:12:55 by tlavared          #+#    #+#             */
/*   Updated: 2025/07/12 16:13:09 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../ft_putchar.c"	

void	ft_putnbr(int nb);

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putnbr(int nb)
{
	char	rest;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	rest = '0' + (nb % 10);
	ft_putchar(rest);
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int	main(void)
{
	int	p[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	ft_foreach(p, 8, ft_putnbr);
}*/
