/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadovan <dpadovan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 23:09:57 by dpadovan          #+#    #+#             */
/*   Updated: 2021/05/30 00:14:37 by dpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	t_allocated;

	t_allocated = size * nmemb;
	ptr = malloc(t_allocated);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, t_allocated);
	return (ptr);
}
