/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:31:16 by sanglee2          #+#    #+#             */
/*   Updated: 2023/06/02 21:28:43 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stddef.h> 

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static int	word_count(char *str, char c)
{
	int	word_cnt;
	int	flag;

	word_cnt = 0;
	flag = 1;
	while (*str)
	{
		if (flag == 1 && *str != '\0' && *str != c)
		{
			word_cnt++;
			flag = 0;
		}
		else if (*str == '\0' || *str == c)
			flag = 1;
		str++;
	}
	return (word_cnt);
}

static char	*str_word_print(char *s, char c)
{
	char	*word;
	int		loc;
	int		i;

	loc = 0;
	i = 0;
	while (s[loc] != '\0' && s[loc] != c)
		loc++;
	word = (char *)malloc(sizeof(char) * (loc + 1));
	if (!word)
		return (0);
	while (s[i] != '\0' && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		len;

	len = word_count((char *)s, c);
	result = (char **)malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (0);
	i = 0;
	while (i < len)
	{
		while (*s != '\0' && *s == c)
			s++;
		result[i] = str_word_print((char *)s, c);
		if (result[i] == 0)
		{
			while (--i >= 0)
				free(result[i]);
			free(result);
			return (0);
		}
		s = s + ft_strlen(result[i++]);
	}
	result[i] = NULL;
	return (result);
}
