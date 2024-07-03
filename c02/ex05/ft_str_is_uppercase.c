/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:38:48 by julrusse          #+#    #+#             */
/*   Updated: 2024/06/26 17:48:07 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	char	a[] = "ABC";
	char	b[] = "abc";
	char	c[] = "";

	printf("%s ""%d\n", a, ft_str_is_uppercase(a));
	printf("%s ""%d\n", b, ft_str_is_uppercase(b));
	printf("%s ""%d", c, ft_str_is_uppercase(c));
	return (0);
}
*/
