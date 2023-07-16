/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:09:17 by memre             #+#    #+#             */
/*   Updated: 2023/07/08 03:20:38 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_tolower(int charact)
{
	if (charact >= 'A' && charact <= 'Z')
		charact += 32;
	return (charact);
}
/*
int main()
{
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('z'));
	printf("%c\n", ft_tolower('Z'));
	printf("%c\n", ft_tolower('1'));
	printf("%c\n", ft_tolower(' '));
	printf("%c\n", ft_tolower('!'));
	printf("%c\n", ft_tolower('a' + 256));
	printf("%c\n", ft_tolower('A' + 256));
	printf("%c\n", ft_tolower('z' + 256));
	printf("%c\n", ft_tolower('Z' + 256));
	printf("%c\n", ft_tolower('1' + 256));
	printf("%c\n", ft_tolower(' ' + 256));
	printf("%c\n", ft_tolower('!' + 256));
}
*/