/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:59:12 by abowers           #+#    #+#             */
/*   Updated: 2024/07/06 15:59:21 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
//
// {
// 	char	test1[] = "HELLO WORLD";
// 	char	test2[] = "H3ll0 W0rld";
// 	char	test3[] = "HELLOWORLD";
//
// 	write(1, "Test1: ", 7);
// 		if (ft_str_is_uppercase(test1))
// 	{
// 		write(1, "1\n", 2);
// 	} else 
// 	{
// 		write(1, "0\n", 2);
// 	}
// 		write(1, "Test2: ", 7);
// 		if (ft_str_is_uppercase(test2)) 
// 	{
// 		write(1, "1\n", 2);
// 	} else
// 	{
// 		write(1, "0\n", 2);
// 	}
// 		write(1, "Test3: ", 7);
// 		if (ft_str_is_uppercase(test3))
// 	{
// 		write(1, "1\n", 2);
// 	} else
// 	{
// 		write(1, "0\n", 2);
// 	}
// 	return (0);
// 	}