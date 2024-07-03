/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 14:36:33 by julrusse          #+#    #+#             */
/*   Updated: 2024/06/21 15:12:21 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_segment_char(char w, char, x, char y, char z)
{
	ft_putchar(w);
	ft_putchar(x);
	write(1, " ", 1);
	ft_putchar(y);
	ft_putchar(z);
	if (w == '9' && x == '8' && y == '9' && z == '9')
	{
		return ;
	}
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	while (a <= '9')
	{
		b = a;
		while (c <= '9' && d == "9")
		{
			b = a + 1;
			while (b <= 8)
			{ ?????

