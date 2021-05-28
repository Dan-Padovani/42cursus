/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 01:06:33 by dpadovan          #+#    #+#             */
/*   Updated: 2021/05/27 21:25:11 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;
	

	size = ft_strlen(s);
		
	while (size >= 0 || c != s[size])
	{	
		if ((char)c == s[size])
			return ((char *)s + size);
		size--;
	}
	return (NULL);
}
