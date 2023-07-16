/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:38:09 by memre             #+#    #+#             */
/*   Updated: 2023/07/15 06:47:44 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	
	ptr1 = (const unsigned char *)pointer1;
	ptr2 = (const unsigned char *)pointer2;
	while (size--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}

/*int main ()
{
   char str1[]= "muhammed";
   char str2[]= "muhbomed";
   printf("%d", ft_memcmp(str1, str2, 4));  
   
   return(0);
}
*/