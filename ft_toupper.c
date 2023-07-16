/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:08:22 by memre             #+#    #+#             */
/*   Updated: 2023/07/08 03:21:02 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_toupper(int charact)
{
	if (charact >= 'a' && charact <= 'z')
		charact -= 32;
	return (charact);
}

/*int main()
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('Z'));
	printf("%c\n", ft_toupper('1'));
	printf("%c\n", ft_toupper(' '));
	printf("%c\n", ft_toupper('!'));
	printf("%c\n", ft_toupper('a' + 512));
	printf("%c\n", ft_toupper('A' + 256));
	printf("%c\n", ft_toupper('z' + 256));
	printf("%c\n", ft_toupper('Z' + 256));
	printf("%c\n", ft_toupper('1' + 256));
	printf("%c\n", ft_toupper(' ' + 256));
	printf("%c\n", ft_toupper('!' + 256));
}
*/