/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:55:23 by okraus            #+#    #+#             */
/*   Updated: 2025/05/19 19:06:29 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	size_t	i;
	char	*s;

	i = 0;
	while (str[i])
		i++;
	s = malloc(sizeof(char) * (i + 1));
	if (s)
	{
		i = 0;
		while (str[i])
		{
			s[i] = str[i];
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	char	*s;
// 	int		i;

// 	i = 0;
// 	while (i < argc)
// 	{
// 		s = ft_strdup(argv[i]);
// 		printf("%s\n", s);
// 		free(s);
// 		i++;
// 	}
// 	return (0);
// }
