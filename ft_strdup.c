/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekulichk <ekulichk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:54:19 by ekulichk          #+#    #+#             */
/*   Updated: 2022/10/26 17:22:05 by ekulichk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*pnt_s1;
	char	*str_dup;

	pnt_s1 = (char *)s1;
	if (!pnt_s1)
		return (NULL);
	len = ft_strlen(pnt_s1);
	str_dup = malloc(sizeof(char) * len + 1);
	if (str_dup == NULL)
		return (NULL);
	ft_memcpy(str_dup, pnt_s1, len);
	str_dup[len] = '\0';
	return (str_dup);
}
