/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:59:15 by dpadovan          #+#    #+#             */
/*   Updated: 2021/06/06 15:35:10 by dpadovan         ###   ########.fr       */
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

static char	*word_len(const char *str, int begin, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - begin + 1) * sizeof(char));
	while (begin < end)
	{
		word[i] = str[begin];
		i++;
		begin++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	begin;
	size_t	end;
	size_t	i;
	char	**n_str;

	n_str = malloc((count_str(s, c) + 1) * sizeof(char *));
	if (!s || !n_str)
		return (NULL);
	begin = 0;
	end = 0;
	i = 0;
	while (i < count_str(s, c))
	{
		while (s[begin] == c && s[begin])
			begin++;
		end = begin;
		while (s[end] != c && s[end])
			end++;
		n_str[i] = word_len(s, begin, end);
		begin = end;
		i++;
		begin++;
	}
	n_str[i] = NULL;
	return (n_str);
}
