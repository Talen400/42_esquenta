/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 09:34:26 by tlavared          #+#    #+#             */
/*   Updated: 2025/07/10 09:34:48 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../ft_putchar.c"

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
/*
int	main(void)
{
	ft_putstr("txt");
}*/
