/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:48:06 by dpadovan          #+#    #+#             */
/*   Updated: 2021/06/05 23:16:39 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*n_str;
	size_t	str_len;
	size_t	max_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen((char *)s);
	if (start < str_len)
		max_len = str_len - start;
	else
		max_len = 0;
	if (max_len > len)
		max_len = len;
	n_str = (char *)malloc(max_len + 1);
	if (!n_str)
		return (NULL);
	ft_strlcpy(n_str, s + start, max_len + 1);
	return (n_str);
}
