/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:17:54 by abowers           #+#    #+#             */
/*   Updated: 2024/07/08 17:19:06 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>

int main(void)

{
	char str1[] = "Hello";
	char str2[] = "Helium";
	char str3[] = "Helipad";
	char str4[] = "hello";
	char str5[] = "helium";
	
	printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("Comparing '%s' and '%s': %d\n", str1, str3, ft_strcmp(str1, str3));
	printf("Comparing '%s' and '%s': %d\n", str1, str4, ft_strcmp(str1, str4));
	printf("Comparing '%s' and '%s': %d\n", str1, str5, ft_strcmp(str1, str5));

	return (0);
}*/