/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:37:58 by okraus            #+#    #+#             */
/*   Updated: 2025/05/19 13:37:59 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = '0' - 1;
	while (++c <= '9')
		ft_putchar(c);
}

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	(void)write(1, &c, 1);
// }

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
