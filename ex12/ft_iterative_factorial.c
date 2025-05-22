/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:57:40 by okraus            #+#    #+#             */
/*   Updated: 2025/05/22 20:28:45 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb > 0)
	{
		while (nb)
		{
			factorial *= nb--;
			if (factorial & 0x80000000)
				return (0);
		}
	}
	else if (nb & 0x80000000)
		return (0);
	return (factorial);
}

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_factorial(-2222));
	printf("%i\n", ft_iterative_factorial(0));
	printf("%i\n", ft_iterative_factorial(1));
	printf("%i\n", ft_iterative_factorial(5));
	printf("%i\n", ft_iterative_factorial(13));
	printf("%i\n", ft_iterative_factorial(14));
	printf("%i\n", ft_iterative_factorial(12));
	printf("%i\n", ft_iterative_factorial(42));
	return (0);
}
