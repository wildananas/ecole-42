/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abowers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:56:01 by abowers           #+#    #+#             */
/*   Updated: 2024/07/06 19:56:06 by abowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>


int	ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (new_word)
			{
				(str[i] -= 32);
				new_word = 0;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!new_word)
			{
				(str[i] += 32);
				new_word = 0;
			}
		}
		else
			new_word = 1;
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "hello wOrld";
// 	ft_strcapitalize(str);
// 	printf(" result : %s \n", str);
// 	//ft_putstr(str);
// 	return (0);
// }

// void	ft_putstr(char *str)

// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }
