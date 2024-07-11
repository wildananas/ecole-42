/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:33:58 by abowers           #+#    #+#             */
/*   Updated: 2024/06/26 15:16:59 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 7;
	int b = 14;

	printf("fonction avant : a = %d et b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("fonction apres : a = %d et b = %d\n", a, b);

	return 0;
}
*/
