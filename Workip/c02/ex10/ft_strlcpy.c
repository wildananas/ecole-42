/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:26:34 by abowers           #+#    #+#             */
/*   Updated: 2024/07/07 16:27:53 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>


unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	j = 0;

	while (src[j])
		j++;
	{
		if (size > 0)
		{
			i = 0;
			while (i < size - 1 && src[i] != '\0')
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
		return (j);
	}
	// void ft_putstr(char *str)
	// {
	// 	while (*str)
	// 	write(1, str, 1);
	// }
}
int	main(void)
{
	char src[] = "Hello World";
	char dest[20];
	int size = 10;
	ft_strlcpy(dest, src, size);
	printf("test : %s%d", dest);
	
	
	
	
	// size copiedLength;

	// copiedLength = ft_strlcpy(dest, src, sizeOf(dest));

	// ft_putstr("source: ");
	// ft_putstr(src);
	// ft_putstr("\nDestination:");
	// ft_putstr("\nTotal length:");

	// char length_str[3];
	// length_str[0] = (copied_length / 10) + '0';
	// length_str[1] = (copied_length % 10) + '0';
	// length_str[2] = '\0';
	// ft_putstr(length_str);
	// ft_putstr("\n");

	return (0);

}
