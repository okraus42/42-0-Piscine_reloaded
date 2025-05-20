/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:32:05 by okraus            #+#    #+#             */
/*   Updated: 2025/05/20 14:42:26 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	size;
	int				*arr;
	int				i;

	size = max - min;
	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * size);
	if (arr)
	{
		i = 0;
		while (min + i < max)
		{
			arr[i] = min + i;
			++i;
		}
	}
	return (arr);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	if (argc != 3)
// 		return (1);
// 	int min = atoi(argv[1]);
// 	int max = atoi(argv[2]);
// 	printf("%i-%i\n", min, max);
// 	int *arr = ft_range(min, max);
// 	int i = 0;
// 	if (!arr)
// 	{
// 		printf("NULL\n");
// 		return (0);
// 	}
// 	while (i < max - min)
// 	{
// 		printf("%i ", arr[i]);
// 		++i;
// 	}
// 	printf("\n");
// 	free (arr);
// 	return (0);
// }
