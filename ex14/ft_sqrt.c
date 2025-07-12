/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 09:29:03 by tlavared          #+#    #+#             */
/*   Updated: 2025/07/10 09:29:05 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	count;
	int	prime;

	if (nb < 0)
		return (0);
	prime = 1;
	count = 0;
	while (nb >= prime)
	{
		nb = nb - prime;
		prime = prime + 2;
		count++;
	}
	if (nb == 0)
		return (count);
	return (0);
}

/*
int	main()
{
	int num = 0;

	while (num <= 100)
	{
		printf("%d => %d\n", num, ft_sqrt(num));
		num++;
	}
}*/
