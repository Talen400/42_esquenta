/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 08:02:53 by tlavared          #+#    #+#             */
/*   Updated: 2025/07/10 08:02:55 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	num = 1;
	while (nb)
	{
		num *= nb;
		nb--;
	}
	return (num);
}
/*
int	main(void)
{
	printf("%d\n",ft_iterative_factorial(-1));
	printf("%d\n",ft_iterative_factorial(0));
	printf("%d\n",ft_iterative_factorial(1));
	printf("%d\n",ft_iterative_factorial(2));
	printf("%d\n",ft_iterative_factorial(5));
}*/
