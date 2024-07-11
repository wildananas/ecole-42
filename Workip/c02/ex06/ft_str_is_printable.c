/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:46:35 by abowers           #+#    #+#             */
/*   Updated: 2024/07/06 16:46:42 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{	
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char	test1[] = "";
	char	test2[] = "aBcd";
	char	test3[] = "";
	write(1, "Test1: ", 7);
		if (ft_str_is_printable(test1))
	{
		write(1, "1\n", 2);
	} else 
	{
		write(1, "0\n", 2);
	}
		write(1, "Test2: ", 7);
		if (ft_str_is_printable(test2)) 
	{
		write(1, "1\n", 2);
	} else
	{
		write(1, "0\n", 2);
	}
		write(1, "Test3: ", 7);
		if (ft_str_is_printable(test3))
	{
		write(1, "1\n", 2);
	} else
	{
		write(1, "0\n", 2);
	}
	return (0);
}*/