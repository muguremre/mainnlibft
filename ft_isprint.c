/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:30:16 by memre             #+#    #+#             */
/*   Updated: 2023/07/05 19:30:27 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_isprint(int character)
{
	if (character >= 32 && character < 127)
		return (1);
	return (0);
}

int main()
{
	printf("%d", ft_isprint('2'));
	return (0);
}
