/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:13:05 by abowers           #+#    #+#             */
/*   Updated: 2024/06/30 17:06:24 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}
/*int main	(void);

	{
		int a;

		a = 13;
		int b;

		b = 4;

		printf("avant: a = %d et b = %d\n", a , b);

		ft_ultimate_div_mod(&a, &b);

		printf("apres a=%d, b=%d", a, b);

		return 0;
	}
*/
