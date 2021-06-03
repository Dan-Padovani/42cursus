/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:20:06 by dpadovan          #+#    #+#             */
/*   Updated: 2021/06/02 21:16:25 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    int 		i;
	int			clone;
	long int 	l_clone;
	char 		*n_str;

	i = 0;
	clone = n;
	l_clone = n;
	while (clone != 0)
	{
		clone = clone / 10;
		i++;
	}
	if (n < 0)
	{
		l_clone = l_clone * -1;
		n_str = (char *)malloc(i + 2);
		n_str[0] = '-';
		n_str[i + 1] = '\0';
	}
	else
	{
		if (!i)
			i = 1;
		n_str = (char *)malloc(i + 1);
		n_str[i] = '\0';
		i--;

	}
	if (n >= 0)
	{
		while (i >= 0)
		{
			n_str[i] = l_clone % 10 + '0';
			l_clone = l_clone / 10;
			i--;
		}
	}
	else
	{
		while (i > 0)
		{
			n_str[i] = l_clone % 10 + '0';
			l_clone = l_clone / 10;
			i--;
		}
	}
    return (n_str);
}