/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekulichk <ekulichk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:57:00 by ekulichk          #+#    #+#             */
/*   Updated: 2022/11/08 17:50:10 by ekulichk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	substr_count(const char *s, char c)
{
	size_t	substr_number;
	int		flag;

	substr_number = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c)
			flag = 0;
		else
		{
			if (!flag)
				++substr_number;
			flag = 1;
		}
		++s;
	}
	return (substr_number);
}

static void	mem_free(char **array)
{
	while (*array)
	{
		free(*array);
		array++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	substr_number;
	char	**result;

	i = 0;
	substr_number = substr_count(s, c);
	if (!s)
		return (NULL);
	result = malloc((substr_number + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s != c && *s != '\0')
			{
				len++;
				s++;
			}
			result[i] = ft_substr(s - len, 0, len);
			if (!result[i])
			{
				mem_free(result);
				return (NULL);
			}
			i++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

// int	main(void)
// {
// 	const char	*s = "hello,world,,,smafl";
// 	char	**result = ft_split(s, ',');
// 	for (; *result; result++)
// 		printf("%s\n", *result);
// 	return (0);
// }

// if *s == c -> s++
// if *s != c -> start, len, substr
// s = s + len

/*
0       int, char, unsigned int, short, ..., float, double, ...
'\0'    char, ... int,...
NULL    (void*)0
0.0     double/float
0.      0.0
*/