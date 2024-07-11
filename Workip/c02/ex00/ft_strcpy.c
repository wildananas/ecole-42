/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:21:51 by abowers           #+#    #+#             */
/*   Updated: 2024/07/03 19:31:52 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}	
//  #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "Alex";
// 	char dest[] = "Gaby";
// 	printf("before %s,\n", dest);
// 	//ft_strcpy(dest, src);
// 	printf("after  %s", ft_strcpy(dest, src));
// 	return 0;
// }
