/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:52:44 by dpadovan          #+#    #+#             */
/*   Updated: 2021/05/31 01:03:38 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n_str;
	size_t	i;
	size_t	j;

	n_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	if (n_str == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		n_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		n_str[i] = s2[j];
		i++;
		j++;
	}
	n_str[i] = '\0';
	return ((char *) n_str);
}
