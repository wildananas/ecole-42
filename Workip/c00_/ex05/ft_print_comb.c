/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:22:33 by abowers           #+#    #+#             */
/*   Updated: 2024/07/01 17:07:45 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

void	ft_print_comb(void)
{
	char	a[3];

	a[0] = '0';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write(1, a, 3);
				if (a[0] != '7' || a[1] != '8' || a[2] != '9')
				{
					write(1, ", ", 2);
				}
			a[2]++;
			}
		a[1]++;
		}
	a[0]++;
	}
}
// void	ft_print_comb(void);

//int	main(void)
//{
//	ft_print_comb();
//
//	return 0;
//}
