/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:02:13 by abowers           #+#    #+#             */
/*   Updated: 2024/07/09 13:38:34 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (i == n)
		return (0);
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	if (s1[i] != '\0' && s2[i] == '\0')
		return (1);
	return (0);
}

// #include<stdio.h>
// int	main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[] = "Helium";
// 	char str3[] = "Hello";
// 	char str4[] = "Horses";
//	
// 	printf("are the two equal '%s' and '%s': %d\n",\
// str1, str2, ft_strncmp(str1, str2, 7));
// 	printf("Are the two equal '%s' and '%s': %d\n",\
// str1, str3, ft_strncmp(str1, str3, 7));
// 	printf("Are the two equal '%s' and '%s': %d\n",\
// str1, str4, ft_strncmp(str1, str4, 7));
//
// 	return (0);
// }