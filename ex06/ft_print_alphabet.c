/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:35:17 by okraus            #+#    #+#             */
/*   Updated: 2025/05/19 12:41:54 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a' - 1;
	while (++c <= 'z')
		ft_putchar(c);
}

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	(void)write(1, &c, 1);
// }

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
