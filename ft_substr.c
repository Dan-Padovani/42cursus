/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:48:06 by dpadovan          #+#    #+#             */
/*   Updated: 2021/05/30 00:41:36 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*n_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = start;
	n_str = (char *)malloc(len + 1);
	if (*s == '\0' || n_str == NULL)
		return (NULL);
	while (i < len && j < ft_strlen(s))
	{
		n_str[i] = s[j];
		i++;
		j++;
	}
	n_str[i] = '\0';
	return (n_str);
}
