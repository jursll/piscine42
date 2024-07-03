/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:18:13 by julrusse          #+#    #+#             */
/*   Updated: 2024/06/27 16:05:16 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	*str2;

	str2 = str;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
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

	printf("%s ""%s\n", a, ft_strupcase(a));
	printf("%s ""%s\n", b, ft_strupcase(b));
	printf("%s ""%s\n", c, ft_strupcase(c));
	return (0);
}
*/
