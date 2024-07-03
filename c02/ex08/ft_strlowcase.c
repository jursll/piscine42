/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:10:07 by julrusse          #+#    #+#             */
/*   Updated: 2024/06/27 12:21:56 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	*str2;

	str2 = str;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str2);
}
/*
int	main(void)
{
	char	a[] = "ABYZ";
	char	b[] = "abyz";
	char	c[] = "AByz";

	printf("%s %s\n", a, ft_strlowcase(a));
	printf("%s %s\n", b, ft_strlowcase(b));
	printf("%s %s\n", c, ft_strlowcase(c));
	return (0);
}
*/
