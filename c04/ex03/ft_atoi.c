/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:18:12 by abowers           #+#    #+#             */
/*   Updated: 2024/07/10 17:19:36 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	sign;
	int	minus_count;

	res = 0;
	i = 0;
	sign = 1;
	minus_count = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		minus_count++;
		i++;
	}
	if (minus_count % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
/*
#include<stdio.h>

int	main (void)
{
	char str1[] = "---+--+1234ab567";
	char str2[] = "     +42";
	char str3[] = "-42";
	char str4[] = "123";
	char str5[] = "abc42";

	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	printf("%d\n", ft_atoi(str5));

	return (0);
}*/