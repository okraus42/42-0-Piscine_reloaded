/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:02:31 by okraus            #+#    #+#             */
/*   Updated: 2025/05/22 20:29:47 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1 && nb < 13)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0 || nb == 1)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i\n", ft_recursive_factorial(-2222));
// 	printf("%i\n", ft_recursive_factorial(0));
// 	printf("%i\n", ft_recursive_factorial(1));
// 	printf("%i\n", ft_recursive_factorial(5));
// 	printf("%i\n", ft_recursive_factorial(14));
// 	printf("%i\n", ft_recursive_factorial(13));
// 	printf("%i\n", ft_recursive_factorial(12));
// 	printf("%i\n", ft_recursive_factorial(15));
// 	return (0);
// }
