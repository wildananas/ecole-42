/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:58:29 by abowers           #+#    #+#             */
/*   Updated: 2024/07/06 18:18:34 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			(str[i] += 32);
		}
		i++;
	}
	return (str);
}

void	ft_putstr(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
// int	main(void)
// {
// 	char str[] = "Hello World";
//
// 	ft_strlowcase(str);
//
// 	ft_putstr(str);
//
// 	return (0);
// }
