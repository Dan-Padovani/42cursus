/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:59:15 by dpadovan          #+#    #+#             */
/*   Updated: 2021/06/04 19:10:15 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_str(const char *str, char c)
{
	size_t		i;
	size_t		total_wrd;

	i = 0;
	total_wrd = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			total_wrd++;
		while (str[i] != c && str[i])
			i++;
	}
	return (total_wrd);
}

char	**ft_split(const char *s, char c)
{
	char	**n_str;
	size_t	begin;
	size_t	end;
	size_t	i;

	n_str = (char **)malloc((count_str(s, c) + 1) * 8);
	if (!s || !c || !n_str)
		return (NULL);
	begin = 0;
	end = 0;
	i = 0;
	while (i < count_str(s, c))
	{
		while (s[begin] == c)
			begin++;
		end = begin;
		while (s[end] != c && s[end])
			end++;
		n_str[i] = ft_substr(s, begin, (end - begin));
		end++;
		i++;
		begin = end;
	}
	n_str[i] = 0;
	return (n_str);
}
