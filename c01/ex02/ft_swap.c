/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:08:02 by julrusse          #+#    #+#             */
/*   Updated: 2024/06/24 11:52:29 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	change;

	change = *a;
	*a = *b;
	*b = change;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 2;
	printf("%d", x);
	printf("%d", y);
	ft_swap(&x, &y);
	printf("%d", x);
	printf("%d", y);
	return (0);
}
*/
