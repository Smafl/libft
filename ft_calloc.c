/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekulichk <ekulichk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:39:40 by ekulichk          #+#    #+#             */
/*   Updated: 2022/10/29 16:22:43 by ekulichk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;

	if (size && size * count / size == count)
	{
		result = malloc(size * count);
		if (!result)
			return (NULL);
		while (count-- > 0)
		{
			result[count] = '\0';
		}
		return (result);
	}
	return (NULL);
}

/*
if (!result)
	return (0);
need with every malloc using
*/