/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:10:28 by dpadovan          #+#    #+#             */
/*   Updated: 2021/05/28 21:50:39 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_str;

	little_str = ft_strlen(little);
	if (little_str == 0)
		return ((char *)big);
	while (len >= little_str)
	{
		len--;
		if (ft_strncmp(big, little, little_str) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
