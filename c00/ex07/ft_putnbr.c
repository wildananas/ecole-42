/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:51:54 by abowers           #+#    #+#             */
/*   Updated: 2024/07/11 11:53:17 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}	
	ft_putchar(nb % 10 + '0');
}

/*#include <stdio.h>

int	main(void)

{
	printf("uper limit is: 2147483647\n");
	ft_putnbr(2147483647);
	printf("lower limit is: -2147483648\n");
	ft_putnbr(-2147483648);
	printf("\nand 0\n");
	ft_putnbr(0);
	printf("them 1\n");
	ft_putnbr(1);
	printf("text ex: 42\n");
	ft_putnbr(42);
	printf("\n");
	return (0);
}*/