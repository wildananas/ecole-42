/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:42:38 by abowers           #+#    #+#             */
/*   Updated: 2024/07/04 20:45:13 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int	main(void)
// {
// 	char	test1[] = "abcd";
// 	char	test2[] = "aBcd";
// 	char	test3[] = "4bcd";
// 	write(1, "Test1: ", 7);
// 		if (ft_str_is_lowercase(test1))
// 	{
// 		write(1, "1\n", 2);
// 	} else 
// 	{
// 		write(1, "0\n", 2);
// 	}
// 		write(1, "Test2: ", 7);
// 		if (ft_str_is_lowercase(test2)) 
// 	{
// 		write(1, "1\n", 2);
// 	} else
// 	{
// 		write(1, "0\n", 2);
// 	}
// 		write(1, "Test3: ", 7);
// 		if (ft_str_is_lowercase(test3))
// 	{
// 		write(1, "1\n", 2);
// 	} else
// 	{
// 		write(1, "0\n", 2);
// 	}
// 	return (0);
// }
