/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 01:06:33 by dpadovan          #+#    #+#             */
/*   Updated: 2021/05/22 01:16:10 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	size;

	size = ft_strlen(s) + 1;
	i = 0;
	while (i < size)
	{
		i++;
		s++;
	}
	while (size >= 0)
	{
		if (c == *s)
			return ((char *)s);
		s--;
		size--;
	}
	return (NULL);
}
