/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:49:31 by julrusse          #+#    #+#             */
/*   Updated: 2024/06/26 18:52:39 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] < 127))
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
	char	b[] = {20, '\0'};
	char	c[] = {127, '\0'};
	char	d[] = "";

	printf("%s ""%d\n", a, ft_str_is_printable(a));
	printf("%s ""%d\n", b, ft_str_is_printable(b));
	printf("%s ""%d\n", c, ft_str_is_printable(c));
	printf("%s ""%d\n", d, ft_str_is_printable(d));
	return (0);
}
*/
