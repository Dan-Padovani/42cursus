/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 23:32:17 by dpadovan          #+#    #+#             */
/*   Updated: 2021/05/22 00:55:27 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	size;

	size = ft_strlen(s) + 1;
	i = 0;
	while (i < size)
	{
		if (*s == c)
			return ((char *)s);
		i++;
		s++;
	}
	return (NULL);
}
