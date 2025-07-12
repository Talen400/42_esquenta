/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 10:57:33 by tlavared          #+#    #+#             */
/*   Updated: 2025/07/10 10:57:34 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
/*
int	main(void)
{
	printf("%d\n", ft_strcmp("ash", "ash"));
	printf("%d\n", ft_strcmp("ash", "as"));
	printf("%d\n", ft_strcmp("ash", "asz"));
	printf("%d\n", ft_strcmp("asj", "ac"));
	printf("%d\n", ft_strcmp("\201", "A"));
}*/
