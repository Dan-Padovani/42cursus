/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:51:23 by dpadovan          #+#    #+#             */
/*   Updated: 2021/06/04 19:03:14 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*n_str;

	i = 0;
	if (s == NULL)
		return (NULL);
	n_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (n_str == NULL)
		return (NULL);
	while (s[i])
	{
		n_str[i] = f(i, s[i]);
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}
