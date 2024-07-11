/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:08:16 by abowers           #+#    #+#             */
/*   Updated: 2024/07/04 15:12:22 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	test1[] = "HelloWorld";
// 	char	test2[] = "Hell0";
// 	char	test3[] = "Hello World";
//
// 	write(1, "Test1: ", 7);
// 		if (ft_str_is_alpha(test1))
// 	{
// 		write(1, "1\n", 2);
// 	} else 
// 	{
// 		write(1, "0\n", 2);
// 	}
// 		write(1, "Test2: ", 7);
// 		if (ft_str_is_alpha(test2)) 
// 	{
// 		write(1, "1\n", 2);
// 	} else
// 	{
// 		write(1, "0\n", 2);
// 	}
// 		write(1, "Test3: ", 7);
// 		if (ft_str_is_alpha(test3))
// 	{
// 		write(1, "1\n", 2);
// 	} else
// 	{
// 		write(1, "0\n", 2);
// 	}
// 	return (0);
// 	}
