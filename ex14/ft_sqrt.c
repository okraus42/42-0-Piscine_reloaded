/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:32:40 by okraus            #+#    #+#             */
/*   Updated: 2025/05/19 13:37:49 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb & 0x80000000)
		return (0);
	i = 0;
	while (i < 46341)
	{
		if (i * i == nb)
			return (i);
		++i;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i\n", ft_sqrt(-2));
// 	printf("%i\n", ft_sqrt(0));
// 	printf("%i\n", ft_sqrt(1));
// 	printf("%i\n", ft_sqrt(8));
// 	printf("%i\n", ft_sqrt(9));
// 	printf("%i\n", ft_sqrt(10));
// 	printf("%i\n", ft_sqrt(65536));
// 	printf("%i\n", ft_sqrt(2147483647));
// 	return (0);
// }
