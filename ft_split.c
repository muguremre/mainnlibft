/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:00:53 by memre             #+#    #+#             */
/*   Updated: 2023/07/09 16:30:53 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static int	ft_wc(char const *s, char c)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			words++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (words);
}

static char	*ft_nw(char *s, char c)
{
	char	*s1;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	s1 = malloc (i + 1);
	if (!s1)
		return (NULL);
	i = 0;
	while (*s && *s != c)
		s1[i++] = *s++;
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	l;

	if (!s)
		return (NULL);
	while (*s && *s == c) //if s is null or s is c
		s++;
	strings = (char **)malloc(sizeof(char *) * (ft_wc(s, c) + 1));
	if (!s || !strings)
		return (NULL);
	l = 0;
	while (*s)
	{
		if (*s != c)
		{
			strings[l++] = ft_nw((char *)s, c);
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	strings[l] = 0;
	return (strings);
}

int main(){
	char str[] = "memre";
	char c = 'e';
	char **str2 = ft_split(str, c);
	printf("%s", str2[0]);
	return 0;
}