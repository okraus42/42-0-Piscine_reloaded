/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 18:00:49 by okraus            #+#    #+#             */
/*   Updated: 2025/05/21 18:37:15 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		++i;
	}
}

// #include <unistd.h>

// void	ft_test(int a)
// {
// 	write(1, &"0123456789"[a % 10], 1);
// }

// int	main(void)
// {
// 	const int	tab[5] = {9, 4, 2, 1, 5};
// 	ft_foreach((int *)tab, 5, &ft_test);
// 	write(1, "\n", 1);
// 	return (0);
// }
