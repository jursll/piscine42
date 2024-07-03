/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:49:46 by julrusse          #+#    #+#             */
/*   Updated: 2024/06/26 17:09:36 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	char	*str1 = "123";
	char	*str2 = "123abc";
	char	*str3 = "";

	printf("%s ""%d\n", str1, ft_str_is_numeric(str1));
	printf("%s ""%d\n", str2, ft_str_is_numeric(str2));
	printf("%s ""%d\n", str3, ft_str_is_numeric(str3));
	return (0);
}
*/
