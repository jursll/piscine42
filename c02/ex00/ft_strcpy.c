/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:09:11 by julrusse          #+#    #+#             */
/*   Updated: 2024/06/27 15:49:17 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char	*dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	x[] = "Hello";
	char	y[10];

	ft_strcpy(y, x);
	printf("%s", y);
	return (0);
}
*/
/*
int main(void)
{
	char	src[6] = "Hello";
	char	dest[6];

	strcpy(dest, src);
	printf("%s", dest);
	return (0);
}*/
