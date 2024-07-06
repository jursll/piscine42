/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:15:45 by julrusse          #+#    #+#             */
/*   Updated: 2024/07/04 10:34:30 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_count(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_dest;
	unsigned int	i_src;
	unsigned int	i;

	i_dest = ft_count(dest);
	i_src = ft_count(src);
	if (size <= i_dest)
	{
		return (size + i_src);
	}
	i = 0;
	while ((src[i] != '\0') && ((i_dest + i) < (size - 1)))
	{
		dest[i_dest + i] = src[i];
		i++;
	}
	dest[i_dest + i] = '\0';
	return (i_dest + i_src);
}
/*
int	main(void)
{
	char	a[20] = "Hello, ";
	char	b[] = "World";
	unsigned int	x = 20;

	printf("%d", ft_strlcat(a, b, x));
	return (0);
}
*/
