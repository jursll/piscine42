/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:10:24 by julrusse          #+#    #+#             */
/*   Updated: 2024/06/26 17:36:31 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "ABc";
	char	b[] = "abc";
	char	c[] = "";

	printf("%s ""%d\n", a, ft_str_is_lowercase(a));
	printf("%s ""%d\n", b, ft_str_is_lowercase(b));
	printf("%s ""%d", c, ft_str_is_lowercase(c));
	return (0);
}
*/
