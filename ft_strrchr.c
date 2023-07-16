/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:31:06 by memre             #+#    #+#             */
/*   Updated: 2023/07/09 17:57:36 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == 0)//if c is null
		return ((char *)(s + i));
	while (i >= 0)
	{
		if (s[i] == (char)c)//if c is not null
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

int main()
{
	char str[] = "memr";
	printf("%s", ft_strrchr(str, 'e'));
	return 0;
}
