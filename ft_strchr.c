/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekulichk <ekulichk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:27:17 by ekulichk          #+#    #+#             */
/*   Updated: 2022/11/09 17:14:40 by ekulichk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *) s);
}

// char	*ft_strchr(const char *s, int c)
// {
// 	char	*pnt_s;
// 	size_t	i;

// 	pnt_s = (char *) s;
// 	i = 0;
// 	while (i <= ft_strlen(pnt_s))
// 	{
// 		if (pnt_s[i] == (char)c)
// 			return (&pnt_s[i]);
// 		i++;
// 	}
// 	return (0);
// }
