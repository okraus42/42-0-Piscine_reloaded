/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:53:03 by okraus            #+#    #+#             */
/*   Updated: 2025/05/19 12:57:03 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a = 8;
// 	int	b = 3;
// 	int	div;
// 	int	mod;
// 	printf("%i %i\n", a, b);
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%i %i\n", div, mod);
// 	return (0);
// }
