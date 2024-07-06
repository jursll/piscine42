/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:13:33 by julrusse          #+#    #+#             */
/*   Updated: 2024/07/05 12:53:25 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "Hello";
	char	c[] = "World";
	char	d[] = "Hallo";
	char	e[] = "Hello World";
	unsigned int	x = 3;

	printf("%d\n", ft_strncmp(a, b, x));
	printf("%d\n", ft_strncmp(a, c, x));
	printf("%d\n", ft_strncmp(a, d, x));
	printf("%d\n", ft_strncmp(a, e, 10));
	return (0);
}
*/
