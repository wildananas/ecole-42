/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:46:39 by abowers           #+#    #+#             */
/*   Updated: 2024/07/04 20:48:04 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	test1[] = "1234";
// 	char	test2[] = "1b34";
// 	char	test3[] = ".b34";
// 	write(1, "Test1: ", 7);
// 		if (ft_str_is_numeric(test1))
// 	{
// 		write(1, "1\n", 2);
// 	} else 
// 	{
// 		write(1, "0\n", 2);
// 	}
// 		write(1, "Test2: ", 7);
// 		if (ft_str_is_numeric(test2)) 
// 	{
// 		write(1, "1\n", 2);
// 	} else
// 	{
// 		write(1, "0\n", 2);
// 	}
// 		write(1, "Test3: ", 7);
// 		if (ft_str_is_numeric(test3))
// 	{
// 		write(1, "1\n", 2);
// 	} else
// 	{
// 		write(1, "0\n", 2);
// 	}
// 	return (0);
// }