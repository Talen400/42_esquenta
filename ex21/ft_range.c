/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:34:46 by tlavared          #+#    #+#             */
/*   Updated: 2025/07/10 18:35:01 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	len;
	int	i;

	len = max - min;
	if (len < 0)
		len *= -1;
	ptr = malloc(len * sizeof(int));
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
/*
int main (void)
{
	int	*ptr;
	int	i;

	ptr = ft_range(0, 3);
	i = 0;
	while (i < 3)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
}*/
