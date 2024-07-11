/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:38:03 by abowers           #+#    #+#             */
/*   Updated: 2024/07/03 21:04:31 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// #include<stdio.h>
// int main(void)
// {
// 	char src[] = "0123456789";
// 	char dest [11];
// 	ft_strncpy(dest, src, 10); 
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	return 0;
// }
