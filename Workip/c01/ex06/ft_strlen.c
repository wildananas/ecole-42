/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:45:41 by abowers           #+#    #+#             */
/*   Updated: 2024/07/05 14:24:17 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)

{
	int count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "Alex";
// 	printf ("%d" , ft_strlen(str));
// 	return 0;
// }
