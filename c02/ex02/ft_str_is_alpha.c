/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:51:01 by julrusse          #+#    #+#             */
/*   Updated: 2024/06/27 16:03:26 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
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
	char	*str1 = "AbcDe";
	char	*str2 = "Abc123";
	char	*str3 = "";

	printf("%s ""%d\n", str1, ft_str_is_alpha(str1));
	printf("%s ""%d\n", str2, ft_str_is_alpha(str2));
	printf("%s ""%d\n", str3, ft_str_is_alpha(str3));
	return (0);
}
*/
