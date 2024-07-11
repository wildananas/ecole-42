/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:28:05 by abowers           #+#    #+#             */
/*   Updated: 2024/06/26 19:40:25 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 10;
	int b = 4;
	int div;
	int mod;

	ft_div_mod(a , b, &div, &mod);

	printf("division de a=%d et b=%d egal %d\n", a, b, div);
	printf("modulus de a=%d %% b=%d donne %d\n", a, b, mod);


	return 0;
}
*/
