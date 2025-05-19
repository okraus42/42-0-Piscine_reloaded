/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:50:29 by okraus            #+#    #+#             */
/*   Updated: 2025/05/19 12:52:30 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a = 0;
// 	int	b = 42;
// 	printf("%i %i\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("%i %i\n", a, b);
// 	return (0);
// }
