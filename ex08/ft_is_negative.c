/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:38:04 by okraus            #+#    #+#             */
/*   Updated: 2025/05/19 13:38:05 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (~n & 0x80000000)
		ft_putchar('P');
	else
		ft_putchar('N');
}

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	(void)write(1, &c, 1);
// }

// int	main(void)
// {
// 	ft_is_negative(0);
// 	ft_is_negative(-10);
// 	ft_is_negative(42);
// 	ft_is_negative(2147483647);
// 	ft_is_negative(-2147483648);
// 	return (0);
// }
