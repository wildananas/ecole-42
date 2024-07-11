/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:03:50 by abowers           #+#    #+#             */
/*   Updated: 2024/07/06 17:05:35 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			(str[i] -= 32);
		}
		i++;
	}
	return (str);
}
// #include<stdio.h>
//
// int	main(void)
// {
// 	char str[] = "Hello World";
//
// 	printf("%s\n", ft_strupcase(str));
// 	return (0);
// }