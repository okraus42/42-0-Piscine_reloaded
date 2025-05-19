/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:42:21 by okraus            #+#    #+#             */
/*   Updated: 2025/05/19 19:07:10 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// void	ft_putchar(char c)
// {
// 	(void)write(1, &c, 1);
// }

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_partition(char **arr, int low, int high)
{
	char	*pivot;
	int		i;
	int		j;

	pivot = arr[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (ft_strcmp(arr[j], pivot) < 0)
		{
			i++;
			ft_swap(&arr[i], &arr[j]);
		}
		j++;
	}
	ft_swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void	ft_quicksort(char **arr, int low, int high)
{
	int	p;

	if (low < high)
	{
		p = ft_partition(arr, low, high);
		ft_quicksort(arr, low, p - 1);
		ft_quicksort(arr, p + 1, high);
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	ft_quicksort(argv, 1, argc - 1);
	j = 0;
	while (argv[++j])
	{
		i = 0;
		while (argv[j][i])
			ft_putchar(argv[j][i++]);
		ft_putchar('\n');
	}
	return (0);
}
